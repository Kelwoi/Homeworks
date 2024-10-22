#pragma once
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 50;
struct car {
	char colour[SIZE]{};
	char model[SIZE]{};
	string number;
};
void fill(car example);
void print(car example);
void print_arr(car* example, int size);
void change(car* example, int size, int which);
void setnum(car example, string number);
void find(car* example, int size, string number);