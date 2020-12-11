/*This file is called fraction.cpp and it is the implementation file.
  assignment_9.1
  Created by Omer Katz on 11/27/17.
  The private members are numerator and denoenator, which are the parts of a
  fraction. They are used in order to create the functions and also used
  in all the operations regarding the function.
*/


#include <iostream>
#include "fraction.h"
using namespace std;


// creates a fraction based on input
Fraction :: Fraction()
{
    numerator = 0;
    denomenator = 1;
    
}






Fraction :: Fraction(int Numerator, int Denomenator)
{
    numerator = Numerator;
    denomenator = Denomenator;
    
    simplify();
    
    
}





// This is a private function, which simplifies the fraction by finding a
// common factor using a loop and the mod operator, it then checks to see if
// the number is a factor for both numbers
void Fraction :: simplify()
{
    int greatestFactor= 1;
    
    
    
    for ( int count =1; count <= numerator; count ++ )
    {
        int test1 = 0;
        int test2 = 0;
        
        if (numerator % count == 0)
        {
            test1 = 1;
        }
        else {
            test1 =0;
        }
        
        if (denomenator % count == 0)
        {
            test2 = 1;
        }
        else{
            test2 = 0;
            
        }
        if ( test1+test2 == 2)
        {
            greatestFactor = count;
        }
        
    }
    
    
    numerator = numerator/greatestFactor;
    denomenator = denomenator/greatestFactor;
    
    
    
    
    
    
    
    
    
    
    
    
}





// addds two fractions together
Fraction Fraction :: addedTo(const Fraction inFraction) const
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator = (denomenator * inFraction.numerator) +
    (numerator * inFraction.denomenator);
    
    
    Fraction result = Fraction(resultNumerator,resultDenomenator);;
    
    return result;
    
}






// subtracts a fraction from another fraction
Fraction Fraction::subtract(const Fraction inFraction)const
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator =  (numerator * inFraction.denomenator)-
    (denomenator * inFraction.numerator);
    
    
    Fraction result = Fraction(resultNumerator,resultDenomenator);;
    
    return result;
    
}






// multiplies two fractions together
Fraction Fraction::multipliedBy(const Fraction inFraction) const
{
    int resultDenomenator = denomenator * inFraction.denomenator;
    int resultNumerator = numerator * inFraction.numerator;
    
    
    Fraction result = Fraction(resultNumerator,resultDenomenator);;
    
    return result;
    
}






// divides a fraction by another fraction
Fraction Fraction::dividedBy(const Fraction inFraction)const
{
    int resultDenomenator = denomenator * inFraction.numerator;
    int resultNumerator = numerator * inFraction.denomenator;
    
    
    Fraction result = Fraction(resultNumerator,resultDenomenator);;
    
    return result;
    
}






// checks if two fractions are equal
bool Fraction::isEqualTo( const Fraction inFraction) const
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
void Fraction::print() const
{
    
    cout << numerator <<"/" << denomenator;
}


/*
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of 3/2 and 2/3 is 1/1
 */








