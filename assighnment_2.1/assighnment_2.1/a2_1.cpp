/*
 Created by Omer Katz on 10/8/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment 2.1 and the file name is a2_1.cpp.
 The purpose of this program is to take in an amount of money (entered in cents) and then tell the user how to make change
 for that amount using only quarters, dimes, nickels, and pennies. The program does this by using the division operator to
 find how many of the largest coin can fit and uses the module operator to find how much money is left over, the amount is
 then compared with the next largest coin.
 */
#include <iostream>
using namespace std;


//constants
int quarterValue = 25;
int dimeValue = 10;
int nickleValue = 5;
int pennyValue = 1;

int main() {
   
    //variables
    
    int numberOfCents;
    int numberOfQuarters;
    int numberOfDimes;
    int numberOfNickles;
    int numberOfPennies;
    
    
    
    
    cout << "enter number of cents: ";
    cin >> numberOfCents;
    
    
    
    //formula to find how many coins
    numberOfQuarters = numberOfCents / quarterValue;
    numberOfCents = numberOfCents % quarterValue;
   
    numberOfDimes = numberOfCents / dimeValue;
    numberOfCents = numberOfCents % dimeValue;
    
    numberOfNickles = numberOfCents / nickleValue;
    numberOfCents = numberOfCents % nickleValue;
   
    numberOfPennies = numberOfCents / pennyValue;
    numberOfCents = numberOfCents % pennyValue;
    

    // print output
    cout << "pennies: "
         << numberOfPennies << endl;
    cout << "nickles: "
         << numberOfNickles << endl;
    cout << "dimes: "
         << numberOfDimes << endl;
    cout << "quarters: "
         << numberOfQuarters << endl;
    
    

}


/*
 
 enter number of cents: 144
 pennies: 4
 nickles: 1
 dimes: 1
 quarters: 5

 */





