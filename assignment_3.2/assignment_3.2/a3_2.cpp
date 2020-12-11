/*
 
 Created by Omer Katz on 10/15/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_3.2 and the file name is a3_2.cpp.
 The program finds the level of education a person has based on the input,
 which states how many years of schooling they have.
 
 
 */

#include <iostream>
using namespace std;

const int firstYear = 1;
const int sixthYear = 6;
const int seventhYear = 7;
const int eighthYear = 8;
const int ninthYear = 9;
const int twelfthYear = 12;


int main() {
    
    int yearsOfSchool;
    
    cout << "Enter years of school:";
    cin >> yearsOfSchool;
    
    if( yearsOfSchool < 0){
        
        cout << "years of school must be a non-negative integer" << endl;
    }
    else if ( yearsOfSchool == 0){
        
        cout << "no school " << endl;
    }
    else if ( yearsOfSchool >= firstYear && yearsOfSchool <= sixthYear){
        
        cout << "elementary school" << endl;
    }
    else if ( yearsOfSchool == seventhYear || yearsOfSchool == eighthYear){
        
        cout << "middle school" << endl;
    }
    else if ( yearsOfSchool >= ninthYear && yearsOfSchool <= twelfthYear){
        
        cout << "high school" << endl;
    }
    else{
        
        cout << "college" << endl;
    }

    
    
    
    
    
    
}


/*
 input 1:
 Enter years of school:-1
 years of school must be a non-negative integer
 
 input 2:
 Enter years of school:13
 college
 
 input3:
 Enter years of school:8
 middle school
 */
