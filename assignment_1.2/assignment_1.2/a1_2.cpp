/* Created by Omer Katz on 9/26/17.
 This proect was made for Dave Harden's CS2a class. The
 project name is assignment_1.2 and the file name is a1_2.cpp
 The purpose of this program is to take in an integer (the number of punds)
 and convert it to ounces.
 Then the progeram prints a string that says that a number of pounds is a certain number of ounces.
 
 */

#include <iostream>
using namespace std;

int main()
{
    int pounds;
    int ounces;
    
    cout << "enter pounds: ";
    cin >> pounds;
    ounces = pounds*16;
    cout << pounds
         <<" pounds is "
         << ounces
         <<" ounces." << endl;
    
    
}
/*
 
 enter pounds: 117
 117 pounds is 1872 ounces.

 */
