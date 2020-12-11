/*
 Created by Omer Katz on 10/19/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_4.2 and the file name is a4_2.cpp.
 The purpose of this program is to keep on converting pounds into ounces until
 the input is a negative number using a
 while loop.
 
 */


#include <iostream>
using namespace std;

const int poundsToOunces = 16;

int main() {
    
    
    double pounds;
    double ounces;
    
    cout << "Enter pounds (negative number to quit):";
    cin >> pounds;
    
    while( pounds > 0){
        
       
        ounces = pounds * poundsToOunces;
        cout << pounds << " pounds is "
        << ounces << " ounces" << endl;
        cout << "Enter pounds (negative number to quit):";
        cin >> pounds;
       
    }
}
/*
 
 Enter pounds (negative number to quit):10
 10 pounds is 160 ounces
 Enter pounds (negative number to quit):3
 3 pounds is 48 ounces
 Enter pounds (negative number to quit):7
 7 pounds is 112 ounces
 Enter pounds (negative number to quit):-1
 
 */
