//
//  main.cpp
//  Asignment1
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

// class Card prototype
class Card
{
    
private:
    char value;
    Suit suit;
    bool errorFlag;
    static bool isValid(char value, Suit suit)
    {
        char upVal;
        upVal = toupper((int)value);
        
        if ( upVal == 'A' || upVal == 'K'|| upVal == 'Q' || upVal == 'J'
            || upVal == 'T'|| (upVal >= '2' && upVal <= '9')){
            
            return false;
            
        }
        else
        {
            return true;
        }
    }
    
public:
    Card(char value = 'A', Suit suit = spades);
    string toString();
    bool set(char value = 'A', Suit suit = spades);
    char getVal();
    Suit getSuit();
    bool getErrorFlag();
    bool equals(Card card);
    
};

// methods-------------
Card::Card(char value, Suit suit)
{
    errorFlag = isValid(value, suit);
    if(!errorFlag){
        if ( !set(value, suit) )
            set('A', spades);}
    else
    {
        errorFlag = true;
    }
}

// stringizer
string Card::toString()
{
    if(!errorFlag){
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
        return retVal;}
    else{
        return "invalid";
    }
}

// set
bool Card::set(char value, Suit suit)
{
    char upVal;
    
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
        errorFlag = false;
        return true;
    }
    else
    {
        errorFlag = true;
        return false;
        
    }
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

bool Card::getErrorFlag()
{
    return errorFlag;
}

bool Card:: equals(Card card)
{
    if( this->value == card.getVal() && this->suit == card.getSuit())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// end of card methods-------------------------------------------------------


class Hand
{
    
    static const int MAX_CARDS = 50;
    
private:
    int numCards;
    Card myCards[MAX_CARDS];
    Suit s = Suit::spades;
    //static const Card INVALID_CARD( '',hearts );
    
public:
    Hand(){ numCards = 0; };
    void resetHand();
    bool takeCard(Card card);
    Card playCard();
    string toString();
    int getNumOfCards();
    Card inspectCard(int k);
    
};



bool Hand ::takeCard(Card card)
{
    
    if(numCards >= MAX_CARDS) return false;
    
    else if(!card.getErrorFlag())
    {
        myCards[numCards] = card;
        numCards++;
    }
    
    return true;
    
}

void Hand ::resetHand()
{
    numCards = 0;
}

string Hand::toString()
{
    string cardString = "(";
    for(int i = 0; i<numCards; i++)
    {
        if(i < numCards-1)
        {
            cardString += myCards[i].toString()+" , ";
        }
        else
        {
            cardString += myCards[i].toString();
        }
    }
    cardString += ")";
    return cardString;
}

Card Hand::playCard()
{
    if(numCards != 0)
    {
    numCards --;
    
    return myCards[numCards];
    }
    else return myCards[numCards];
    
}

int Hand::getNumOfCards()
{
    return numCards;
}

Card Hand::inspectCard(int k)
{
    Card INVALID_CARD( '9',hearts );
    if ( k >= numCards)
    {
        return INVALID_CARD;
    }
    return myCards[k];
}

//------------------------------------end of hand class


 class Deck
 {
 static const int  MAX_PACKS = 6;
 static const int NUM_CARDS_PER_PACK = 52;
 static const int MAX_CARDS_PER_DECK = MAX_PACKS *NUM_CARDS_PER_PACK;
  
  
 private:
     
 static Card masterPack[NUM_CARDS_PER_PACK];
    
     static void allocateMasterPack()
     {
         
         Suit st;
         int k, j;
         char val;
         
         Card card;
         for(int i =0; i < NUM_CARDS_PER_PACK; i++)
         {
             masterPack[i] = card;
         }
         
         for (k = 0; k < 4; k++)
         {
             // set the suit for this loop pass
             st = static_cast<Suit>(k);  // or old style:  st = (Card::Suit)k;
             
             // now set all the values for this suit
             Deck::masterPack[13*k].set('A', st);
             for (val='2', j = 1; val<='9'; val++, j++)
                 masterPack[13*k + j].set(val, st);
             masterPack[13*k+9].set('T', st);
             masterPack[13*k+10].set('J', st);
             masterPack[13*k+11].set('Q', st);
             masterPack[13*k+12].set('K', st);
             
             
         }
         
         
       
         
     }
     
    Card cards[MAX_CARDS_PER_DECK];
    int topCard;
    int numPacks;
    
 
 public:
    Deck(int numPacks = 1 );
 
    bool init(int numPacks);
 
    void shuffle();
 
    Card dealCard();
 
    int getTopCard​();
 
    Card inspectCard(int k);
 
 
 };
 
Deck::Deck( int numPacks )
{
    
    
   
    topCard = 52*numPacks-1;
    allocateMasterPack();
    
    for( int i = 0; i < numPacks*52; i++)
    {
        cards[i] = masterPack[i];
    }
    
    
 
}

bool Deck::init( int numPacks)
{
    return false;
}
 
void Deck::shuffle()
{
 
}

Card Deck::dealCard()
{
   if( topCard >0)
   {
      topCard--;
      return cards[topCard];
   }
   else
   {
       return cards[topCard];
   }
}

int Deck::getTopCard​()
{
    
    return topCard;
}
 
Card Deck::inspectCard(int k)
{
    if ( k >= topCard)
    {
       return NULL;
    }
       return cards[k];
}





int main(int argc, const char * argv[]) {
   
    
}






