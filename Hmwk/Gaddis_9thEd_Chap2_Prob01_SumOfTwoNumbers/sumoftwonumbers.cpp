/*
 * File: sumoftwonumbers.cpp
 * Author: Kevin Morris
 * Created on June 24, 2022, 7:08 PM
 * Purpose: Write a program that stores the integers 50 and 100 in variables,
 * and stores the sum of these two in a variable named total.
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc, char**argv) { 
// Initialize the Random Number Seed    
//Declare Variables
    float bkBdgt,ntbkBdgt,total;//total=total cost of both note & school books.
                     bkBdgt=1e2;//bkBdgt=cost of the school books.
                   ntbkBdgt=5e1;//ntbkBdgt=cost of the note books.
//Initialize Variables
         total= bkBdgt+ntbkBdgt;
//Map inputs to outputs-> The Process
//Display Results
    cout <<"All of the students will agree," ;
    cout<<" the cost for course materials is on an incline. "<<endl;
    cout <<"Last year, my course materials for school were only $50. "<<endl;
    cout <<"This year, my course materials were double that cost, "<<endl;
    cout<<"and I had to pay $100. "<<endl;
    cout <<"To sum things up,";
    cout<<" this year the total cost of school books came to $" <<(total);
    cout<<"."<<endl;
    //Exit stage right
return 0;}

