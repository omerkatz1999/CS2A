/*
 
 Created by Omer Katz on 10/29/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_5.1 and the file name is a5_1.cpp.
 The program takes asks the user how many numbers will be entered and then
 finds the position of the first and last 7.
 
 */

#include <iostream>
using namespace std;


const int searchedNumber = 7;

int main() {
    
    int numbersEntered;
    cout << "How many numbers will be entered?";
    cin >> numbersEntered;
    
    int numberTyped;
    int firstPosition = numbersEntered+1;
    int lastPosition = 0;
    
    
    
    for( int count = 0; count < numbersEntered; count++){
        cout << "Enter num:";
        cin >> numberTyped;
        if (numberTyped == searchedNumber && (count+1) < firstPosition){
            firstPosition = count+1;
        }
        if (numberTyped == searchedNumber && count+1 > lastPosition){
            lastPosition = count+1;
        }
        
    }
    if (firstPosition != numbersEntered+1){
        cout << "The first " << searchedNumber << " was in position "
        << firstPosition << endl;
        cout << "The last " << searchedNumber << " was in position "
        << lastPosition << endl;
        
    }
    else{
        cout << "Sorry, no " << searchedNumber << "'s were entered"
        << endl;
       
    }
}
/*
 
 output 1:
 How many numbers will be entered?8
 Enter num:5
 Enter num:7
 Enter num:6
 Enter num:7
 Enter num:7
 Enter num:3
 Enter num:8
 Enter num:6
 The first 7 was in position 2
 The last 7 was in position 5
 
 output 2:
 How many numbers will be entered? 8
 Enter num: 5
 Enter num: 2
 Enter num: 6
 Enter num: 7
 Enter num: 1
 Enter num: 3
 Enter num: 8
 Enter num: 6
 The first 7 was in position 4
 The last 7 was in position 4
 
 output 3:
 How many numbers will be entered? 8
 Enter num: 5
 Enter num: 1
 Enter num: 6
 Enter num: 5
 Enter num: 9
 Enter num: 3
 Enter num: 8
 Enter num: 6
 Sorry, no 7's were entered.

 */





