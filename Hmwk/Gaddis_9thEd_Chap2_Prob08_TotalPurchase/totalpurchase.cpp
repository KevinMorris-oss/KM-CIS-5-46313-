/*
File: totalpurchase.cpp
Author: Kevin Morris
Created on June 24, 2022, 7:38 PM
*Purpose: A customer in a store is purchasing five items. 
* The prices of the five items are as follows:
*Write a program that holds the prices of the five items in five variables.
Display each item's price, the subtotal of the sale,the amount of sales tax, 
*and total.
Assume the sales tax is 7%.
*/
//System Libraries
#include<iostream>
#include<iomanip>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int arg,char**argv) {
// Initialize the Random Number Seed    
//Declare Variables
float Prco,Prct,Prcth,Prcf,Prcfi,subTl,slsTx,tlPrce;
Prco=15.95;//Price of item 1= $15.95.
Prct=24.95;//Price of item 2= $24.95.
Prcth=6.95;//Price of item 3= $6.95. 
Prcf=12.95;//Price of item 4= $12.95.
Prcfi=3.95;//Price of item 5= $3.95.
//Initialize Variables
//Map inputs to outputs-> The Process
subTl=(Prco)+(Prct)+(Prcth)+(Prcf)+(Prcfi);//The sum of all five items.
slsTx=.07;//Sales tax is 7%
tlPrce=(subTl)+(tlPrce);//Total price including tax.
subTl=(Prco)+(Prct)+(Prcth)+(Prcf)+(Prcfi);
slsTx=subTl*(7./100);
tlPrce=subTl+slsTx;
//Display Results    
cout<<"The price of item one =                        $"<<(Prco);
cout<<"."<<endl;
cout<<"The price of item two =                        $"<<(Prct);
cout<<"."<<endl;
cout<<"The price of item three =                       $"<<(Prcth);
cout<<"."<<endl;
cout<<"The price of item four =                       $"<<(Prcf);
cout<<"."<<endl;
cout<<"The price of item five =                        $"<<(Prcfi);
cout<<"."<<endl;
cout<<setprecision(4);
cout<<"The subtotal of all items before tax =         $"<<(subTl);
cout<<"."<<endl;
cout<<setprecision(3);
cout<<"The sales tax of 7% on the total of all items = $"<<(slsTx);
cout<<"."<<endl;
cout<<setprecision(4);
cout<<"The total price including sales tax =          $"<<(tlPrce);
cout<<"."<<endl;
//Exit stage right    
return 0;}
