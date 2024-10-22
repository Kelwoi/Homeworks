#include <iostream>
#include "code.h"
int main()
{
	//for single car
	car example;
	fill(example);
	//for arr
	const int size = 10;
	car arr[size] = {
		{"Blue","Bugatti Veyron","37291"},
		{"white","Tesla Model S","76389"},
		{"Green","Aston Martin DB11","64825"},
		{"red","Subaru Outback","gieate"},
		{"black","Ford Mustang","91264"},
		{"Violet","Audi Q7","porewsa"},
		{"gold","Lexus RX","lerasd"},
		{"black","Mazda MX-5","0011"},
		{"white","Toyota Supra","4312"},
		{"dark-blue","BMW M5","lller"},
	};
	print_arr(arr, size);
	change(arr, size, 5);
	print_arr(arr, size);
	find(arr, size, "lller");

}


