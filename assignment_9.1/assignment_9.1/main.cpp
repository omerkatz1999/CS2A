/*
 Created by Omer Katz on 11/17/17.
 Dave Harden's CS2a class
 project name is assignment_8.1
 The purpose of this program is create a class called fraction and create
 variouse methods so the client program could
 set, print, add, subtract, multiply, and compare fractions.
 */

#include <iostream>
#include "fraction.h"
using namespace std;

// Creates an object that is a fraction

int main() {
    
    Fraction f1(9,8);
    Fraction f2(2,3);
    Fraction result;
    
    cout << "The result starts off at ";
    result.print();
    cout << endl;
    
    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;
    
    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;
    
    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;
    
    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;
    
    if (f1.isEqualTo(f2)){
        cout << "The two Fractions are equal." << endl;
    } else {
        cout << "The two Fractions are not equal." << endl;
    }
    
    const Fraction f3(12, 8);
    const Fraction f4(202, 303);
    result = f3.multipliedBy(f4);
    cout << "The product of ";
    f3.print();
    cout << " and ";
    f4.print();
    cout << " is ";
    result.print();
    cout << endl;
}
















