/* 
* File:   mpg.cpp
* Author: Kevin Morris
* Created on June 23, 2022, 12:50 PM
* Purpose: MPG
*/
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Initialize the Random Number Seed    
//Declare Variables
float mlsDrvn,//Miles Driving
mpg,//Miles Per Gallon
nGalns;//Number of Gallons to fill tank
//Initialize Variables
mlsDrvn=3.75e2f;//375 miles driving on a tank of gas
nGalns=1.5e1f;//Number of Gallons to fill car
//Map inputs to outputs-> The Process
mpg=mlsDrvn/nGalns;
//Display Results
cout<<mpg<<" Miles Per Gallon = "
<<mlsDrvn<<" Miles Driving / "
<<nGalns<<" Gallons Used"<<endl;
//Exit stage right    
return 0;}