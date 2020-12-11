/*
 
 Created by Omer Katz on 10/19/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_4.1 and the file name is a4_1.cpp.
 The purpose of this program is to keep on converting pounds into ounces as
 long as the user responds yes to "would you like to enter pounds?"
 
 */


#include <iostream>
using namespace std;

const int poundsToOunces = 16;

int main() {
    
    char response;
    double pounds;
    double ounces;
    
    cout << "would you like to enter pounds?(Y or N)";
    cin >> response;
    
    while( response == 'y'|| response == 'Y'){
        
        cout << "enter pounds:";
        cin >> pounds;
        ounces = pounds * poundsToOunces;
        cout << pounds << " pounds is "
        << ounces << " ounces" << endl;
      
        cout << "would you like to enter pounds?(Y or N)";
        cin >> response;
    }
}
/*
 
 would you like to enter pounds?(Y or N)y
 enter pounds:50
 50 pounds is 800 ounces
 would you like to enter pounds?(Y or N)y
 enter pounds:10
 10 pounds is 160 ounces
 would you like to enter pounds?(Y or N)n
 
 */
  
    
    
    


