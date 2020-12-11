/*
 
 This is the class file, which is called fraction.h
 for assignment_9.1. It was Created by Omer Katz on 11/27/17.
 This class creates a fraction, which the user can use. The fraction is created
 and then it can be used in various operations through different
 methods.
 
*/

#ifndef fraction_hpp
#define fraction_hpp

#include <iostream>

using namespace std;

// Creates an object that is a fraction
class Fraction {
public:
    Fraction();
    //pre condition: the object is called with no parameters
    //post condition: the fraction that is returned is 0/1
    
    Fraction(int Numerator, int Denomenator);
    //pre condition: the object is called with two parameters
    //that are the numerator and denomenator
    //post condition: creates any fraction based on input and simplifies it
    
    Fraction addedTo(const Fraction inFraction)const;
    //pre condition: the object takes in two different fraction types objects
    //post condition: returns a fraction that is the
    //summation of the two fractions
    
    Fraction subtract(const Fraction inFraction)const;
    //pre condition: the object takes in two different fraction types objects
    //post condition: returns a fraction that is the
    //difference of the two fractions
    
    Fraction multipliedBy(const Fraction inFraction)const;
    //pre condition: the object takes in two different fraction types objects
    //post condition: returns a fraction that is the
    //multiple of the two fractions
    
    Fraction dividedBy(const Fraction inFraction)const;
    //pre condition: the object takes in two different fraction types objects
    //post condition: returns a fraction that is the
    //quotiant of the two fractions
    
    bool isEqualTo(const Fraction inFraction) const;
    ////pre condition: the object takes in two different fraction types objects
    //post condition: returns whether the fractions are equal
    
    void print() const;
    ////pre condition: needs a fraction type object
    //post condition: returns the fraction
    
private:
    void simplify();
    int numerator;
    int denomenator;
};



#endif /* fraction_hpp */
