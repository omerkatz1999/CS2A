/*
 
 Created by Omer Katz on 10/19/17.
 This project was made for Dave Harden's CS2a class. The
 project name is assignment_4.3 and the file name is a4_3.cpp.
 The purpose of this program is to count how many members come
 into the theater from each age group. Also to find how many people
 perfer popcorn, soda, or both. In addition, the program
 needs to calculate the average age of the attendees, and find the age of the
 youngest and oldest attendees.
 
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int eighteen = 18;
const int thirty = 30;
const int forty = 40;
const int sixty = 60;

int main() {
    
  
    
    //phase 1
    int membersInGroup1 = 0;
    int membersInGroup2 = 0;
    int membersInGroup3 = 0;
    int membersInGroup4 = 0;
    int membersInGroup5 = 0;
    
    
    //phase 2
    int count = 0;
    double sumOfAge = 0;
    int youngest;
    int oldest;
    
    //phase3
    int peopleWhoLikePopcorn = 0;
    int peopleWhoLikeSoda = 0;
    int peopleWhoLikeBoth = 0;
    char response;
    
    int age;
    cout << "Enter age of attendee (negative number to quit):";
    cin >> age;
    
    
    youngest = age;
    oldest = age;
    
    
    
    
   
    
    while(age > 0){
        cout << "Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):";
        cin >> response;
        if(response == 'p'){
            peopleWhoLikePopcorn++;
        }
        else if( response == 's'){
            peopleWhoLikeSoda++;
        }
        else if( response == 'b'){
            peopleWhoLikeBoth++;
        }
        
        count++;
        
        sumOfAge = sumOfAge +age;
        
        if(age < youngest){
            youngest = age;
        }
        if(age > oldest){
            oldest = age;
        }
        
        
        if(age <= eighteen){
            membersInGroup1++;
        }
        else if( age > eighteen && age <= thirty){
            membersInGroup2++;
        }
        else if( age > thirty && age <= forty){
            membersInGroup3++;
        }
        else if( age > forty && age <= sixty){
            membersInGroup4++;
        }
        else if( age > sixty){
            membersInGroup5++;
        }
        cout << "Enter age of attendee (negative number to quit):";
        cin >> age;

    }
    
    
    if(count > 0){
    // phase 1 output
    cout << "" << endl;
    cout << "age 0  to 18: "
         << membersInGroup1 << endl;
    cout << "age 19 to 30: "
         << membersInGroup2 << endl;
    cout << "age 31 to 40: "
         << membersInGroup3 << endl;
    cout << "age 41 to 60: "
         << membersInGroup4 << endl;
    cout << "over 60: "
         << membersInGroup5 << endl;
    
    //phase 3 output
    cout << "" << endl;
    cout << "Food preference popcorn: "
         << peopleWhoLikePopcorn << endl;
    cout << "Food preference soda: "
         << peopleWhoLikeSoda << endl;
    cout << "Food preference both: "
         << peopleWhoLikeBoth << endl;
    
    //phase 2 output
    cout << "" << endl;
    cout << setprecision(1) << fixed << "The average was "
         << sumOfAge/count << endl;
    cout << "The youngest person in attendance was "
         << youngest << endl;
    cout <<"The oldest person in attendance was "
         << oldest << endl;
    cout << count;
    }
    else{
        cout << "No attendees inputed" << endl;
    }
}



/*
 Enter age of attendee (negative number to quit):34
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):s
 Enter age of attendee (negative number to quit):16
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):b
 Enter age of attendee (negative number to quit):68
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):b
 Enter age of attendee (negative number to quit):53
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):s
 Enter age of attendee (negative number to quit):39
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):p
 Enter age of attendee (negative number to quit):23
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):s
 Enter age of attendee (negative number to quit):21
 Enter food preference ('p' for popcorn, 's' for soda, 'b' for both):s
 Enter age of attendee (negative number to quit):-1
 
 age 0  to 18: 1
 age 19 to 30: 2
 age 31 to 40: 2
 age 41 to 60: 1
 over 60: 1
 
 Food preference popcorn: 1
 Food preference soda: 4
 Food preference both: 2
 
 The average was 36.3
 The youngest person in attendance was 16
 The oldest person in attendance was 68
 */
