/*
 Created by Omer Katz on 12/2/17.
 Dave Harden's CS2a class
 project name is assignment_10.1
 The purpose of this is to make a program that takes in a list of number and
 prints them out without printing repeated numbers
 */


#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;


bool test(int list[], int &numberItems, int number);
void readNumbers(int list[], int &numberItems, int number);
void print(int list[], int &numberItems);
int main()
{
    
    int number = 0;
    int numberItems = 0;
    int list[ARRAY_SIZE];
    
    
    readNumbers(list, numberItems, number);
    
    cout << "The numbers in order: ";
    print( list, numberItems);
 
}






// checks that the number is unique
bool test(int list[], int &numberItems, int number)
{
    
    for (int count = 0; count < numberItems; count++){
        if (number == list[count] ){
            return false;
            
        }
       
    }
    
    return true;
}






// print the array
void print(int list[], int &numberItems){
    
    for (int count = 0; count <= numberItems; count++){
        cout << list[count] << " ";
    }
}






//creates a unique array by calling on the boolean function
void readNumbers(int list[], int &numberItems, int number){
    
    
    int count = 0;
    
    cout << "Enter a number (negative number to quit): ";
    cin >> number;
    
    
    while (number >= 0 && count < ARRAY_SIZE){
        
        numberItems = count;
        
        if( test( list, numberItems, number)){
            list[count] = number;
            count++;
        }
        else {
            numberItems = numberItems-1;
        }
        
        cout << "Enter a number (negative number to quit): ";
        cin >> number;
    }
    
    
    
}

/*
 
 Enter a number (negative number to quit): 1
 Enter a number (negative number to quit): 2
 Enter a number (negative number to quit): 3
 Enter a number (negative number to quit): 3
 Enter a number (negative number to quit): 4
 Enter a number (negative number to quit): 4
 Enter a number (negative number to quit): 7
 Enter a number (negative number to quit): 7
 The numbers in order: 1 2 3 4 7
 
 
 */



