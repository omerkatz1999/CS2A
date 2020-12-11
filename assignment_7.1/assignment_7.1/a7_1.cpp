/*
 
Created by Omer Katz on 11/11/17.
Dave Harden's CS2a class
project name is assignment_7.1
The purpose of this program is two generate math problems that are random
and check if the user's input is correct or not. The user can also
modfiy the number of problems and that maximum numbers that can be used in
the problems.
 
 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void doOneSet(char,int & , int &);
void doOneProblem(char, int , int &);
void generateOperands(int &num1 ,int &num2, int max);
void calculateCorrectAnswer(int num1, int num2, int &correctAnswer, char);
void checkAnswer(int correctAnswer, string &check, char, int & );
void getProbsPerSet(int &);
void getMaxNum(int &);
void printHeader(char);
void printReport(int &, int &,int &,int &);


int main()
{
    int probsPerSet;
    int numAns1;
    int numAns2;
    int numAns3;
    
    srand(static_cast<unsigned>(time(0)));
    getProbsPerSet(probsPerSet);
    doOneSet('+', probsPerSet, numAns1);
    doOneSet('-', probsPerSet, numAns2);
    doOneSet('*', probsPerSet, numAns3);
    printReport(numAns1, numAns2, numAns3, probsPerSet);
    
}





// Creates the problem set, a set is defined as all probelms with the same operator
void doOneSet(char operation, int &probsPerSet, int &numAns )
{
    printHeader(operation);
    int max;
    getMaxNum(max);
    
    numAns =0;
    
    for( int i = 0; i < probsPerSet; i++)
    {
        doOneProblem(operation, max, numAns);
       
    }
  
  
}





// creates one generated problem, it has two number and an operator
void doOneProblem(char operation, int max, int &numAns){
    int num1;
    int num2;
    int correctAnswer;
    string check;


    
    generateOperands(num1, num2, max);
    cout << num1 << operation << num2 << " = ";
    
    calculateCorrectAnswer( num1,  num2,  correctAnswer, operation);
    checkAnswer( correctAnswer, check, operation, numAns);
    cout << check << endl;
}





// generates two random numbers for the problem
void generateOperands(int &num1, int &num2, int max)
{
     num1 = rand() % (max+1);
     num2 = rand() % (max+1);
}





// calculates the correct answer for the problem
void calculateCorrectAnswer(int num1, int num2, int &correctAnswer, char operation)
{
    if(operation == '+'){
        correctAnswer = num1 +num2;
    }
    else  if(operation == '-'){
        correctAnswer = num1 -num2;
        
    }
    else {
        correctAnswer = num1*num2;
    }
}





// compares the user's input with the actual calculated answer
void checkAnswer(int correctAnswer, string &check,
                 char operation, int &numAns)
{
    int userAnswer;
    cin >> userAnswer;
   
    
    if(userAnswer == correctAnswer){
        check = "correct";
        if (operation == '+'){
            numAns++;
        }
        else if( operation == '-'){
            numAns++;
        }
        else{
            numAns++;
        }
    }
    else{
        check = "incorrect";
    }
}





// defines how many problems are in a set
void getProbsPerSet(int &probsPerSet){
    cout << "Enter problems per set: ";
    cin >> probsPerSet;
    
}





// recieves a number and sets it as the maximum for the integers that are generated
void getMaxNum(int &max)
{
    cout << "What is the maximum number for this set?";
    cin >> max;
}





// print the header for every set of problems
void printHeader(char operation)
{
    int setNumber = 0;
    if(operation == '+'){
        setNumber = 1;
    }
    else if( operation == '-'){
        setNumber =2;
    }
    else {
        setNumber =3;
    }
    cout << "set #" << setNumber << endl;
    
}





// prints the amount of problems that were right as well as the percentage of them
void printReport(int &numAns1, int &numAns2, int &numAns3, int &probsPerSet)
{
    double percent;
    
    
    cout << " #1:  You got " << numAns1 << " correct out of " << probsPerSet
         << " for ";
    percent = (1.0*numAns1)/probsPerSet * 100;
    cout << fixed <<  setprecision(1) << percent << "%" << endl;
    
    cout << " #2:  You got " << numAns2 << " correct out of " << probsPerSet
         << " for ";
    percent = (1.0*numAns2)/probsPerSet * 100;
    cout << fixed <<  setprecision(1) << percent << "%" << endl;
    
    
    cout << " #3:  You got " << numAns3 << " correct out of " << probsPerSet
         << " for ";
    percent = (1.0*numAns3)/probsPerSet * 100;
    cout << fixed <<  setprecision(1) << percent << "%" << endl;
    
    cout << "Overall you got " << numAns1+numAns2+numAns3 << " correct out of "
         << probsPerSet *3 << " for ";
    cout << (100.0)*(numAns1+numAns2+numAns3)/(probsPerSet *3.0) << "%" << endl;

  
}

/*

 Enter problems per set: 3
 set #1
 What is the maximum number for this set?1
 0+0 = 0
 correct
 1+0 = 2
 incorrect
 1+0 = 1
 correct
 set #2
 What is the maximum number for this set?5
 4-4 = 0
 correct
 5-3 = 2
 correct
 0-1 = 1
 incorrect
 set #3
 What is the maximum number for this set?9
 8*3 = 24
 correct
 8*6 = 48
 correct
 0*9 = 3
 incorrect
 #1:  You got 2 correct out of 3 for 66.7%
 #2:  You got 2 correct out of 3 for 66.7%
 #3:  You got 2 correct out of 3 for 66.7%
 Overall you got 6 correct out of 9 for 66.7%
 
 
 
 
 */





