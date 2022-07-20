/* 
 * File: A2 More Test Output Format
 * Author:Kevin Morris
 * Date:07/05/2022
 * Purpose:Code E Assignment 2
 * Version: Netbeans 8.2
 */
//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Initialize the Random Number Seed    
//Declare Variables
float w=1.00,x=2.00,y=3.00,z=4.00;
int a=1,b=2,c=3,d=4;
//Initialize Variables
cin>>a>>b>>c>>d;
w=a;x=b;y=c;z=d;
//Map inputs to outputs-> The Process
//Display Results 
cout<<setw(8)<<""<<a;
cout<<fixed<<showpoint<<setprecision(1);
cout<<setw(7)<<""<<w;
cout<<fixed<<showpoint<<setprecision(2);
cout<<setw(6)<<""<<w<<endl;
cout<<fixed<<noshowpoint<<setprecision(0);
cout<<setw(8)<<""<<b;
cout<<fixed<<showpoint<<setprecision(1);
cout<<setw(7)<<""<<x;
cout<<fixed<<showpoint<<setprecision(2);
cout<<setw(6)<<""<<x<<endl;
cout<<fixed<<noshowpoint<<setprecision(0);
cout<<setw(8)<<""<<c;
cout<<fixed<<showpoint<<setprecision(1);
cout<<setw(7)<<""<<y;
cout<<fixed<<showpoint<<setprecision(2);
cout<<setw(6)<<""<<y<<endl;
cout<<fixed<<noshowpoint<<setprecision(0);
cout<<setw(8)<<""<<d;
cout<<fixed<<showpoint<<setprecision(1);
cout<<setw(7)<<""<<z;
cout<<fixed<<showpoint<<setprecision(2);
cout<<setw(6)<<""<<z;
cout<<fixed<<noshowpoint<<setprecision(0);
//Exit stage right    
return 0;}
//Utilize the iomanip Library
//Run the template provided and examine the 
//input and output.  Then code!
//You will need to use iomanip on this question.
//Specifically - fixed, setprecision, showpoint, 
//setw(), formatting aspects.
//Look at the input match the output.
//Output numbers in the specific columns and format.
//If you match the first test case by reading the 4 
//values input, then you will match the hidden test 
//case as well.
//You can't see the input, but 4 values are there.