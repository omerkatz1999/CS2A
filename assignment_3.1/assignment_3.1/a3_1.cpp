/*
 Created by Omer Katz on 10/14/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_3.1 and the file name is a3_1.cpp.
 The purpose of this program is to find the area of either a triangle or square
 depending on the input. The program also round the area to the nearest tenth.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    char shapeType;
   
    cout << "Enter the type of figure (s or t): ";
    cin  >> shapeType;
   
    double base;
    double height;
    double side;
   

    if(shapeType == 't'){
        
        cout << "enter the base: ";
        cin >> base;
        cout << "enter height: ";
        cin >> height;
        
        double triangleArea = base*height*0.5;
        cout << "the area is: ";
        cout << fixed << setprecision(1) << triangleArea << endl;
        
    }
    else if( shapeType == 's') {
        cout << "Enter the length of a side: ";
        cin >> side;
        double squareArea = side*side;
        cout << fixed << setprecision(1) << "The area is: "
        << squareArea << endl;
        
    }
        else{
            cout << "Error: invalid input" << endl;
        }
    
    
    
    
}


/*
 
 Input 1:
 
 Enter the type of figure ( s or t): t
 enter the base: 10.27
 enter height: 10.11
 the area is: 51.9
 
 Input 2:
 
 Enter the type of figure ( s or t): s
 Enter the length of a side: 10.23
 The area is: 104.7
 
 
 
 */
