//write include statement for decisions header
#include <iostream>
#include <string>
#include "decimals.h"
using std::string;
//Write code for function(s) code here

char letter_grade;

int get_letter_grade_using_if(int numerical_grade){
if (numerical_grade >= 90)
{
    letter_grade = 'A';
}
else if (90 > numerical_grade >= 80)
{
    letter_grade = 'B';
}
else if (80 > numerical_grade >= 70)
{
    letter_grade = 'C';
}
else if (70 > numerical_grade >= 60)
{
    letter_grade = 'D';
}
else{
    letter_grade = 'F';
};

return letter_grade;
}


int get_letter_grade_using_switch(int numerical_grade){


    switch (numerical_grade)
    {
        case 100:
            letter_grade = 'A';
            break;
        case 95:
            letter_grade = 'A';
            break;
        case 90:
            letter_grade = 'A';
            break;
        case 85:
            letter_grade = 'B';
            break;
        case 80:
            letter_grade = 'B';
            break;
        case 75:
            letter_grade = 'C';
            break;
        case 70:
            letter_grade = 'C';
            break;
        case 65:
            letter_grade = 'D';
            break;
        case 60:
            letter_grade = 'D';
            break;
        case 55:
            letter_grade = 'F';
            break;   
        case 50:
            letter_grade = 'F';
            break;    
        default:
            letter_grade = 'F';
            break;
    }
    return letter_grade;
}