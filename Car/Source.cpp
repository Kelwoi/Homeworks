#include "code.h"
#include <iostream>
bool isNumeric(string& str)
{
	for (char ch : str)
	{
		if (!isdigit(ch))
		{
			return false;
		}
	}
	return true;
}
void setnum(car example, string number) {
	if (!isNumeric(number)) {
		if (number.length() > 8) {
			cout << "symbol number can't be higher than 8!!!" << endl;
		}
		else {
			example.number = number;
		}
	}
	else {
		if (number.length() > 5) {
			cout << "Error numeric length can't be higher than 5!!!" << endl;
		}
		else {
			example.number = number;
		}
	}
}
void fill(car example) {

	string number;
	cout << "Enter car colour: "; cin.getline(example.colour, SIZE);
	cout << "Enter car model: ";  cin.getline(example.model, SIZE);
	cout << "Enter car number: ";
	cin >> number;
	setnum(example, number);
	print(example);
	cin.ignore();
}
void change(car* example, int size, int which) {
	string number;
	cout << "Changing: " << endl;
	cout << "Enter new car colour: "; cin.getline(example[which - 1].colour, SIZE);
	cout << "Enter new car model: ";  cin.getline(example[which - 1].model, SIZE);
	cout << "Enter new car number: ";
	cin >> number;
	setnum(example[which - 1], number);

}
void print(car example) {
	cout << "colour: " << example.colour << endl;
	cout << "model: " << example.model << endl;
	cout << "number: " << example.number << endl;
}
void print_arr(car* example, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << "============= Car" << i + 1 << "=============" << endl;
		cout << "colour: " << example[i].colour << endl;
		cout << "model: " << example[i].model << endl;
		cout << "number: " << example[i].number << endl;
		cout << endl;
	}

}
void find(car* example, int size, string number) {
	bool found = true;
	for (size_t i = 0; i < size; i++)
	{
		if (example[i].number == number ) {
			cout << "successfully found one!" << endl;
			cout << "============= Car" << i + 1 << "=============" << endl;
			cout << "colour: " << example[i].colour << endl;
			cout << "model: " << example[i].model << endl;
			cout << "number: " << example[i].number << endl;
			cout << endl;
			found = false;
			
		}
		
	}
	if (found != false) {
		cout << "Sorry, we found nothing!" << endl;
	}
}