//
//  main.cpp
//  test
//
//  Created by Omer Katz on 1/10/18.
//  Copyright © 2018 Omer Katz. All rights reserved.
//

#include <string>
#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

enum Suit { clubs, diamonds, hearts, spades };

// class Card prototype -----------------------
class Card
{
private:
    char value;
    Suit suit;
    static isValid(char value, Suit suit);
public:
    Card(char value = 'A', Suit suit = spades);
    string toString();
    bool set(char value = 'A', Suit suit = spades);
    char getVal();
    Suit getSuit();
    
};  // end of class Card prototype --------------

int main()
{
    Card card1, card2('5'), card3('9', hearts),
    card4('j', clubs), card5('1', diamonds);
    
    if ( ! card1.set(2, clubs) )
        cout << "incorrect value (2, clubs) passed to card::set()\n\n";
    if ( ! card1.set('2', clubs) )
        cout << "incorrect value ('2', clubs) passed to card::set()\n\n";
    
    cout << card1.toString() << endl << card2.toString() << endl <<
    card3.toString() << endl << card4.toString() << endl
    << card5.toString() << endl<< endl;
    
    card1 = card4;
    
    // test assignment operator for objects
    cout << "after assigning card4 to card1:\n";
    cout << card1.toString() << endl << card4.toString()
    <<  endl << endl;
    
    // now notice the assignment operator is not a reference copy (like Java/C#)
    card1.set();
    cout << "after changing card1:\n";
    cout << card1.toString() << endl << card4.toString()
    <<  endl << endl;
    
    cout << "after assigning card4 to card1:\n";
    cout << card1.toString() << endl << card4.toString()
    <<  endl << endl;
    return 0;
}

// beginning of Card method definitions -------------

// constructor
Card::Card(char value, Suit suit)
{
    // if not valid, set to Ace of Spades
    if ( !set(value, suit) )
        set('A', spades);
}

// stringizer
string Card::toString()
{
    string retVal;
    char strVal[2];
    
    // convert char to a CString
    strVal[0] = value;
    strVal[1] = '\0';
    
    // convert from CString to s-c string
    retVal = string(strVal);
    
    if (suit == spades)
        retVal += " of Spades";
    else if (suit == hearts)
        retVal += " of Hearts";
    else if (suit == diamonds)
        retVal += " of Diamonds";
    else if (suit == clubs)
        retVal += " of Clubs";
    
    return retVal;
}

// mutator
bool Card::set(char value, Suit suit)
{
    char upVal;
    
    // convert to uppercase to simplify (need #include <cctype>)
    upVal = toupper((int)value);
    
    // check for validity
    if (
        upVal == 'A' || upVal == 'K'
        || upVal == 'Q' || upVal == 'J'
        || upVal == 'T'
        || (upVal >= '2' && upVal <= '9')
        )
    {
        this->suit = suit;
        this->value = upVal;
        return true;
    }
    else
        return false;
}

// accessors
char Card::getVal()
{
    return value;
}

Suit Card::getSuit()
{
    return suit;
}
// end of Card method definitions
