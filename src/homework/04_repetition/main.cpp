//write include statements
#include <iostream>
#include "dna.h"
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int decision;
	int factorial_input;
	int GCD_input;
	int GCD_input2;
	string exit;
	int x = 1;
	do
	{
		cout << "1-Factorial \n";
		cout << "2-Greatest Common Divisor \n";
		cout << "3-Exit \n";
		cin >> decision;
			if (decision = 1 || 2){
				if (decision = 1){
					cout << "please input in what you would like the factorial of. (integer please) \n";
					cin >> factorial_input;
					cout << factorial(factorial_input);
					x = x + 1;
					}
					
				else if (decision = 2)
				{
					cout << "please input in your first digit for Greatest Common Divisor. (integer please) \n";
					cin >> GCD_input;
					cout << "please input in your second digit for Greatest Common Divisor. (integer please) \n";
					cin >> GCD_input2;
					cout << gcd(GCD_input, GCD_input2);
					x = x + 1;
				}
				else if (decision = 3){
					cout << "Are you sure? \n";
					cin >> exit;
					if (bool exit = "yes" || "y"){
						x = x + 1;
					}
					else if (bool exit = "no" || "n")
					break;

				}
			
		}
	}
	 while (!(x = 2));
	
	
	return 0;
}