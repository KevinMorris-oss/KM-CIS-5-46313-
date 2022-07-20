/*
* File: salesprediction.cpp
* Author: Kevin Morris
* Created on June 24, 2022, 12:57 PM
* Purpose: The East Coast sales division of a company generates 58 percent of 
* total sales. Based on that percentage, 
* write a program that will predict how much the East Coast division will 
* generate if the company has $8.6 million in sales this year. 
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
int main(int argc, char**argv){
//ecSlsDiv= East Coast Division annual sales 58%
//ttlSls= Company total annual sales
//ecSlsPyr=formula (ecSlsDiv/ttlSls)*100{
float ecSlsDiv,ttlSls,ecSlsPyr; 
ecSlsDiv=.58e2f; //East Coast sales percentage (58%).
ttlSls=8.6e-7f; //Annual sales this year.
ecSlsPyr=ecSlsDiv*ttlSls*10e+4f; //Percentage of the annual East Coast
   //division sales.      
cout<<"In order to find the percentage of annual sales the East Coast"
" division will contribute."<<endl;
cout<<"We need to calculate how much of a revenue the East Coast"
" division contributes."<<endl;
cout<<"To sum up, if the East Coast division is responsible for 58%"
" of total sales,"<<endl;
cout<< "and the total sales are $8.6 million. "<<endl;
cout<<setprecision(3);
cout<<"Then the East Coast division will generate $"<<(ecSlsPyr);
cout<<" million of the company's annual sales.";
//Exit stage right 
return 0;}