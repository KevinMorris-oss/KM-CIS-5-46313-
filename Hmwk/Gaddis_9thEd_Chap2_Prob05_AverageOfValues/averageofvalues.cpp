/*
* File: averageofvalues.cpp
* Author: Kevin Morris
* Created on June 24, 2022, 3:45 PM
* Purpose:To get the average of a series of values,
* you add the values up then divide the sum by the number of values.
* Write a program the stores the following values in five different variables:
* 28, 32, 37, 24, and 33.
* The Program should first calculate the sum of these five variables
* and store the result in a separate variable named sum.
* Then, the program should divide the sum variables by 5 to get the average.
* Display the average on the screen.
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
float thrtyTwo,thrtyTre,thrtySvn,twntyeht,twntyfo,Sum, Nbv, Avrg ;
// Initialize the Random Number Seed    
//Declare Variables
twntyeht=28;//Numerical value of twenty eight.
thrtyTwo=32;//Numerical value of thirty two.
thrtySvn=37;//Numerical value of thirty seven.
twntyfo=24;//Numerical value of twenty four.
thrtyTre=33;//Numerical value of thirty three.
Nbv=5;//Number of variables.
//Initialize Variables
Sum= (twntyeht)+(thrtyTwo)+(thrtySvn)+(twntyfo)+(thrtyTre);
Avrg=(Sum/Nbv);
//Map inputs to outputs-> The Process
//Display Results   
cout<<"We have an array of five numbers than include 28, 32, 37, 24, 33."<<endl;
cout<<"First, lets add up the array of five variables,"<<endl;
cout<<"which gives us a net value of "<<(Sum);
cout<<"."<<endl;
cout<<"Then, we are going to divide the sum of our variables,"<<endl;
cout<<"which is "<<(Nbv);
cout<<"."<<endl;
cout<<"Finally, after the divide we are left with and average of "<<(Avrg);
cout<<".";
//Exit stage right      
return 0;}