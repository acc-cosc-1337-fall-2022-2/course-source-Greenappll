//write include statements
#include <iostream>
#include "data_types.h"
#include"data_types.cpp"
//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	int result;
	int num1;

	cin >> num;
	result = multiply_numbers(num);
	cout << result << "\n";

	num1 = 4;
	result = multiply_numbers(num1);
	cout << result << "\n";
	return 0;
};
