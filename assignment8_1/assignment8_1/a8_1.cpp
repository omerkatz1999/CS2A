/*
 Created by Omer Katz on 11/17/17.
 Dave Harden's CS2a class
 project name is assignment_8.1
 The purpose of this program is create a class called fraction and create
 variouse methods so the client program could
 set, print, add, subtract, multiply, and compare fractions.
 */

#include <iostream>

using namespace std;

// Creates an object that is a fraction
class Fraction {
public:
    void set(int inNumerator, int inDenomenator);
    Fraction addedTo(Fraction inFraction);
    Fraction subtract(Fraction inFraction);
    Fraction multipliedBy(Fraction inFraction);
    Fraction dividedBy(Fraction inFraction);
    bool isEqualTo(Fraction inFraction);
    void print();

private:
    int numerator;
    int denomenator;
};





// creates a fraction based on input
void Fraction :: set(int inNumerator, int inDenomenator)
{
    numerator = inNumerator;
    denomenator = inDenomenator;
    
    
}





// addds two fractions together
Fraction Fraction :: addedTo(Fraction inFraction)
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator = (denomenator * inFraction.numerator) +
    (numerator * inFraction.denomenator);
    
    Fraction resultFraction;
    resultFraction.set(resultNumerator,resultDenomenator);
    
    return resultFraction;
    
}





// subtracts a fraction from another fraction
Fraction Fraction::subtract(Fraction inFraction)
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator =  (numerator * inFraction.denomenator)-
    (denomenator * inFraction.numerator);
   
    
    Fraction resultFraction;
    resultFraction.set(resultNumerator,resultDenomenator);
    
    return resultFraction;
    
}





// multiplies two fractions together
Fraction Fraction::multipliedBy(Fraction inFraction)
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator = numerator * inFraction.numerator;
    
    
    Fraction resultFraction;
    
    resultFraction.set(resultNumerator,resultDenomenator);
    
    return resultFraction;
    
}





// divides a fraction by another fraction
Fraction Fraction::dividedBy(Fraction inFraction)
{
    int resultDenomenator = denomenator * inFraction.numerator;
    int resultNumerator = numerator * inFraction.denomenator;
    
    
    Fraction resultFraction;
    
    resultFraction.set(resultNumerator,resultDenomenator);
    
    return resultFraction;
    
}





// checks if two fractions are equal
bool Fraction::isEqualTo( Fraction inFraction)
{
    int comparison1 = numerator * inFraction.denomenator;
    int comparison2 = denomenator * inFraction.numerator;
    
    if ( comparison1 == comparison2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
    
    
}





// prints a fraction out
void Fraction::print()
{
    cout << numerator << "/" << denomenator;
}


int main() {
    
    
    Fraction f1;
    Fraction f2;
    Fraction result;
    
    f1.set(9, 8);
    f2.set(2, 3);
    
    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;
    
    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;
    
    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;
    
    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;
    
    if (f1.isEqualTo(f2)){
        cout << "The two Fractions are equal." << endl;
    } else {
        cout << "The two Fractions are not equal." << endl;
    }
   
}

/*
 
 The product of 9/8 and 2/3 is 18/24
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.

 
 
 */
