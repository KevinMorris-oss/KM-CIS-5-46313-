/*
* File: restaurantbill.cpp
* Author: Kevin Morris
* Created on June 24, 2020, 1:23 PM
* Purpose: Write a program that computes the tax and tip on a restaurant bill
* for a patron with  a $88.67 meal charge.
* The tax should be 6.75 percent of the meal cost, the tip should be 20 percent
* of the total after adding the tax.
* Display the meal cost, tax amount, tip amount, and total bill on the screen.
*/
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc,char**argv) {
float tlCst,txCst,tpCst,mlCst,sbtlCst;
// Initialize the Random Number Seed    
//Declare Variables 
mlCst=  // Meal Cost of $88.67.
txCst=  // Tax cost @ 6.75% of meal cost.
sbtlCst=// The meal cost with tip cost included.
tpCst=  // Tip Cost @ 20% of Meal and Tax Cost.
tlCst=  // Total Cost of Meal, Tax, including Tip.
//Initialize Variables
mlCst=88.67;
txCst=mlCst*(6.75)/100;
sbtlCst=mlCst+txCst;
tpCst=sbtlCst*(20.)/100;
tlCst=(sbtlCst)+(tpCst);
//Map inputs to outputs-> The Process 
//Display Results  
cout.precision(4);
cout<<"Last night was date night, so we decided on a seafood dinner";
cout<<".\n";
cout<<"The dinner was great, and it was only $";cout <<(mlCst);
cout<<".\n";
cout.precision(3);
cout<<"But, I did not take into consideration the 6.75% tax,";
cout<<"\n";
cout<<"which added up to be $" <<(txCst);cout <<".\n";
cout.precision(4);
cout<<"When, I added the sales tax to the bill,"<<endl;
cout<<"this gave me a subtotal of $"<<(sbtlCst);
cout<<".\n";
cout<<"After all that, I was reluctant to factor in a 20% tip as well,";
cout<<"\n";
cout<<"which tacked on another $" << (tpCst);cout <<".\n";
cout<<"Finally, after I added up the cost of dinner, sales tax, and the tip,";
cout<<".\n";
cout.precision(5);
cout<<"To my dismay, the bill had sky-rocketed to a grand total of $" << (tlCst);
cout<<".\n";
cout<<"After all this, thats when  I come to the humbling realization that,";
cout<<"\n";
cout<<"we should have just ordered pizza!!!";
//Exit stage right
return 0;}
