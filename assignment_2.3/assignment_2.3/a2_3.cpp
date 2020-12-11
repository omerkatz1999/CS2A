/*
 Created by Omer Katz on 10/8/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment 2.3 and the file name is a2_3.cpp.
 The purpose of this program is to take in an input of a first middle and last name and then print out several statement
 using this data. The first thing the program does is print the first middle and last names each on a separate line.
 Then it print the initials on the 4th line. On the 5th line it print the first 3 letters of the middle name.
 on the 6th line it prints out the 8th character. On the 7th line it prints out the number of characters in the full name
 (including the spaces)
 */

#include <iostream>
using namespace std;

int main() {
    // insert code here...
 
    string firstName;
    string middleName;
    string lastName;
    string initialsOfName;
    string firstLettersOfMiddleName;
    string eighthLetter;
    double numberOfCharacters;
    
    cin >> firstName;
    cin >> middleName;
    cin >> lastName;
    
    string fullName;
    fullName = firstName + " " + middleName +" " + lastName;
    cout << firstName <<endl
         << middleName << endl
         << lastName << endl;
    initialsOfName = firstName.substr(0,1)+ middleName.substr(0,1)+ lastName.substr(0,1);
    cout << initialsOfName << endl;
    
    firstLettersOfMiddleName = middleName.substr(0,3);
    cout << firstLettersOfMiddleName << endl;
    
    eighthLetter = fullName.substr(7,1);
    
    cout << eighthLetter << endl;
    
    
    numberOfCharacters = fullName.length();
    
    cout << numberOfCharacters << endl;
    
}

/*
 
 omer john katz
 omer
 john
 katz
 ojk
 joh
 h
 14
 
 */






