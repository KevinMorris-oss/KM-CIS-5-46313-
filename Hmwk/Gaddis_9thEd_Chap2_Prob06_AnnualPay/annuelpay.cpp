/*
File: annualpay.cpp
Author: Kevin Morris
Created on June 24, 2022, 4:38 PM
* Purpose: Suppose an employee gets paid every two weeks and earns $2,200
* each pay period.
* In a year, the employee gets paid 26 times. Write a program that defines the
* following variables:
* payAmount, payPeriods, annualPay.
* The program should calculate the employee's total annual pay
* by multiplying the employee's pay amount by the number of pay periods in a year
* and store the result in the annualPay variable. 
* Display the total annual pay on the screen.
*/
//System Libraries
#include<iostream>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc,char**argv) {
// Initialize the Random Number Seed    
//Declare Variables
float payAmount,payPeriods,annualPay;
payAmount=2200;//Amount of pay the employee earns each pay period.
payPeriods=26;//Total number of pay periods per year. 
//Initialize Variables
annualPay=2200*26;//Calculated Annual Pay.
//Map inputs to outputs-> The Process
//Display Results   
cout <<"To calculate the employee's annual pay."<<endl;
cout <<"We must multiply the employee's biweekly wage which is $2200,"<<endl;
cout<<"by the amount of pay periods per year, which is 26."<<endl;
cout<<"So, when we multiply $2200 by 26. "<<endl;
cout<<"The calculation gives us $"<<(annualPay);
cout <<" annual pay.";
//Exit stage right  
return 0;}
