/*
 Created by Omer Katz on 10/15/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_3.4 and the file name is a3_4.cpp.
 The purpose of this program is to find the cost a phone call based on the
 length and start time, while accounting for various discounts.
 
 */

#include <iostream>
#include <iomanip>
using namespace std;

const double priceRate = 0.4;
const double fiftyPercentDiscount = 0.5;
const double fifteenPercentDiscount = 0.85;
const double taxRate = 1.04;

int main() {
    
    double startTime;
    double callLength;
    double grossCost;
    double discountedCost;
    double costAfterTax;
    
    cout << "enter start time: ";
    cin >> startTime;
    
    cout << "Enter length of call in minutes: ";
    cin >> callLength;
    
    grossCost = callLength * priceRate;
    
    if(startTime >= 1800 || startTime < 800){
        
       discountedCost = grossCost * fiftyPercentDiscount;
        
        if( callLength >= 60 ){
            
            discountedCost = discountedCost * fifteenPercentDiscount;
            
        }
    }
    else{
        if( callLength >= 60 ){
            
            discountedCost = grossCost * fifteenPercentDiscount;
            
        }
        else{
            
            discountedCost = grossCost;
        }
    }
    
    costAfterTax = discountedCost * taxRate;
    
    cout << setprecision(2) << fixed << "gross cost is: "
         << grossCost << endl;
    cout << setprecision(2) << fixed <<"net cost is: "
         << costAfterTax;
    
    
}


/*
Sample output 1:
 
 enter start time: 2322
 Enter length of call in minutes: 67
 gross cost is: 26.80
 net cost is: 11.85
 
 
Sample output 2:
 
 enter start time: 759
 Enter length of call in minutes: 10
 gross cost is: 4.00
 net cost is: 2.08
 
 
Sample output 3:
 
 enter start time: 1300
 Enter length of call in minutes: 100
 gross cost is: 40.00
 net cost is: 35.36
 
Sample output 4:
 
 enter start time: 1300
 Enter length of call in minutes: 10
 gross cost is: 4.00
 net cost is: 4.16
 
 
 */
