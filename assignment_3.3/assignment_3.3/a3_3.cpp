/*
 Created by Omer Katz on 10/15/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_3.3 and the file name is a3_3.cpp
 The purpose of this program is to take in a number than an operator(+,-,/,x)
 and thena second number and to calculate the answer using a switch statement.
 
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double number1;
    double number2;
    
    char operation;
    
    cout << "enter the first number:";
    cin >> number1;
    
    cout << "enter the operation:";
    cin >> operation;
    
    cout << "enter the second number:";
    cin >> number2;
    
    switch (operation){
        case '+': cout << fixed << setprecision(2) << number1 + number2; break;
        case '-': cout << fixed << setprecision(2) << number1 - number2; break;
        case '/': cout << fixed << setprecision(2) << number1 / number2; break;
        case 'x': cout << fixed << setprecision(2) << number1 * number2; break;
            
           
            
    }

}

/*
 
 enter the first number:64
 enter the operation:x
 enter the second number:2
 128.00
 
 */


