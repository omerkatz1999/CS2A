/*
 Created by Omer Katz on 10/8/17.
 This proejct was made for Dave Harden's CS2a class. The
 project name is assignment 2.2 and the file name is a2_2.cpp.
 The purpose of this program is take in an input of degree celsius and convert the number in
 to degrees farenheit. The program than prints out a statement reading that
 the input of degrees celsius is the converted number of degrees farenheit.
 
 
 */

#include <iostream>
using namespace std;

int main() {
    
    
    //variables
    double celsiusDegrees;
    double farenheitDegrees;
    
    
    //print Statements
    cout << "enter degree celsius: ";
    
    cin >> celsiusDegrees;
    
    farenheitDegrees = (9.0/5)*celsiusDegrees + 32;
    
    cout << celsiusDegrees
         << " degree celsius is "
         << farenheitDegrees
    << " degree farenheit" <<endl;
    
    
    /*
     
    enter degree celsius: 30
    30 degree celsius is 86 degree farenheit
    
    */
    
}
