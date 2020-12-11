/*
 Created by Omer Katz on 11/5/17.
 Dave Harden's CS2a class
 project name is assignment_6.1
 The purpose of this program is to draw a rocket that is based on the
 parameters that the user inputs. The program is supposed to use one big
 function that draws the rocket by refering to other functions that
 draw parts of the rocket. This assignment also has
 a extra credit part, which includes resizing and shifting the cone (the
 top and bottom of the rocket) to fit the rest of the body of the rocket.
 
 
 
 
 */
#include <iostream>
using namespace std;

void drawCone(int);
void drawBox(int, int, int);
void drawHorizontalLine();
void draw2VerticalLines(int, int);
void drawOneRow(int);
void drawRocket(int, int, int);
void getDimentions(int &width, int &height, int &numOfStages);

const int even = 2;
const int secondRow = 2;

int main() {
    
    int width;
    int height;
    int numOfStages;
    
    getDimentions( width, height, numOfStages);

    
    drawRocket(width, height,numOfStages);
    
 
   
    
}


void drawCone(int width){
    int numOfRows;
    
    if ( width % even == 0 )
    {
        numOfRows = width/even;
        //first row
        for( int count = 0; count < (numOfRows-1); count++)
        {
            
            cout << " ";
            
        }
         cout  << "xx" << endl;
        //other rows
        for ( int currentRow = secondRow; currentRow < (numOfRows+1) ; currentRow++)
        {
            for( int count =0; count< (numOfRows-currentRow); count++)
            {
                cout  <<" ";
                
            }
            cout << "x";
            
            for( int count = 0; count < ( 2*(currentRow-1)); count++)
            {
                cout << " ";
                
            }
            cout << "x" << endl;
            
        }
    }
    else
    {
        numOfRows = (width +1)/even;
        //first row
        for( int count = 0; count < (numOfRows-1); count++)
        {
            
            cout << " ";
            
        }
         cout  << "x" << endl;
    
  
   
        // loop for other rows
        for ( int currentRow = secondRow; currentRow < (numOfRows+1) ; currentRow++)
        {
            for( int count =0; count< (numOfRows-currentRow); count++)
            {
                cout  <<" ";
            
            }
            cout << "x";
        
            for( int count = 0; count < ( 2*(currentRow-1)-1); count++)
            {
                cout << " ";
                
            }
            cout << "x" << endl;
        
        }
    }

}

void drawHorizontalLine(int numXs)
{
    int count;
    for (count = 0; count < numXs; count++){
        cout << "X";
    }
    cout << endl;
}

void draw2VerticalLines(int width, int height)
{
    int numOfSpaces = width;
    
    int rowCount;
    
    for (rowCount = 0; rowCount < (height-2); rowCount++){
        
        drawOneRow(numOfSpaces);
        
    }
}

void drawOneRow(int numOfSpaces)
{
    int spaceCount;
    
    cout << "X";
    for (spaceCount = 0; spaceCount < (numOfSpaces-2); spaceCount++){
        cout << " ";
    }
    cout << "X" << endl;
}


void drawBox(int widthP, int heightP)
{
   
        drawHorizontalLine(widthP);
        draw2VerticalLines(widthP, heightP);
        drawHorizontalLine(widthP);
    
}
void drawRocket(int width, int height, int stagesP)
{
    drawCone(width);
  for( int count = 0; count < stagesP; count++)
  {
    drawBox(width, height);
  }

    drawCone(width);
    
}
void getDimentions(int &width, int &height, int &numOfStages)
{
    
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter number of stages: ";
    cin >> numOfStages;
   
}
/*
 
 Enter width: 5
 Enter height: 6
 Enter number of stages: 2
   x
  x x
 x   x
 XXXXX
 X   X
 X   X
 X   X
 X   X
 XXXXX
 XXXXX
 X   X
 X   X
 X   X
 X   X
 XXXXX
   x
  x x
 x   x

 
 
 input 2 (extra credit-even number of rows):
 Enter width: 20
 Enter height: 6
 Enter number of stages: 2
          xx
         x  x
        x    x
       x      x
      x        x
     x          x
    x            x
   x              x
  x                x
 x                  x
 XXXXXXXXXXXXXXXXXXXX
 X                  X
 X                  X
 X                  X
 X                  X
 XXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXXXX
 X                  X
 X                  X
 X                  X
 X                  X
 XXXXXXXXXXXXXXXXXXXX
          xx
         x  x
        x    x
       x      x
      x        x
     x          x
    x            x
   x              x
  x                x
 x                  x
 
 
 input 3 (extra credit-odd number):
 Enter width: 11
 Enter height: 5
 Enter number of stages: 3
      x
     x x
    x   x
   x     x
  x       x
 x         x
 XXXXXXXXXXX
 X         X
 X         X
 X         X
 XXXXXXXXXXX
 XXXXXXXXXXX
 X         X
 X         X
 X         X
 XXXXXXXXXXX
 XXXXXXXXXXX
 X         X
 X         X
 X         X
 XXXXXXXXXXX
      x
     x x
    x   x
   x     x
  x       x
 x         x
 
 
 */




