/*
 
 Created by Omer Katz on 10/30/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_5.2 and the file name is a5_3.cpp.
 The program takes in a number and finds the sum of all the squares
 of the numbers up to that integer.
 
 
 */

#include <iostream>
using namespace std;

int main() {
    
    int numberEntered;
    
    
    cout << " Enter a number greater than 0 (less than 1 to quit):";
    cin >> numberEntered;
    while( numberEntered > 0){
        int sumOfSquares = 0;
        for( int count = 1; count <= numberEntered; count++){
            sumOfSquares = sumOfSquares + count*count;
            
        }
        cout << "The sum of the squares from 1 to " << numberEntered
        << " is " << sumOfSquares <<endl;
        cout << "Enter a number greater than 0 (less than 1 to quit):";
        cin >> numberEntered;
    }
    
    
    
    
}
/*
 
 Enter a number greater than 0 (less than 1 to quit): 4
 The sum of the squares from 1 to 4 is 30
 Enter a number greater than 0 (less than 1 to quit): 1
 The sum of the squares from 1 to 1 is 1
 Enter a number greater than 0 (less than 1 to quit): 0

 */
