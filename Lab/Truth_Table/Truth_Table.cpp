/* 
 * File: Truth Table .cpp
 * Author: Kevin Morris
 * Created on July 08, 2022, 10:10 AM
 * Purpose:  Truth Table
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
bool x,y;//Boolean statements represented in the Table    
//Initialize Variables
cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y"
<<"!(X||Y) !X||!Y !(X&&Y)" <<endl;
//Map inputs to outputs-> The Process
//Display Results
x=y=true;//1st Row of the Truth Table
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"  ";
cout<<(!y?'T':'F')<<"   ";
cout<<(x&&y?'T':'F')<<"   ";
cout<<(x||y?'T':'F')<<"    ";
cout<<(x^y?'T':'F')<<"    ";
cout<<(x^y^x?'T':'F')<<"     ";
cout<<(x^y^y?'T':'F')<<"      ";
cout<<(!(x&&y)?'T':'F')<<"       ";
cout<<(!x||!y?'T':'F')<<"       ";
cout<<(!(x||y)?'T':'F')<<"     ";
cout<<(!x&&!y?'T':'F')<<"          ";
cout<<endl;
y=false;//2nd Row of the Truth Table
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"  ";
cout<<(!y?'T':'F')<<"   ";
cout<<(x&&y?'T':'F')<<"   ";
cout<<(x||y?'T':'F')<<"    ";
cout<<(x^y?'T':'F')<<"    ";
cout<<(x^y^x?'T':'F')<<"     ";
cout<<(x^y^y?'T':'F')<<"      ";
cout<<(!(x&&y)?'T':'F')<<"       ";
cout<<(!x||!y?'T':'F')<<"       ";
cout<<(!(x||y)?'T':'F')<<"     ";
cout<<(!x&&!y?'T':'F')<<"          ";
cout<<endl;
y=true;//3rd Row of the Truth Table
x=false;
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"  ";
cout<<(!y?'T':'F')<<"   ";
cout<<(x&&y?'T':'F')<<"   ";
cout<<(x||y?'T':'F')<<"    ";
cout<<(x^y?'T':'F')<<"    ";
cout<<(x^y^x?'T':'F')<<"     ";
cout<<(x^y^y?'T':'F')<<"      ";
cout<<(!(x&&y)?'T':'F')<<"       ";
cout<<(!x||!y?'T':'F')<<"       ";
cout<<(!(x||y)?'T':'F')<<"     ";
cout<<(!x&&!y?'T':'F')<<"          ";
cout<<endl;
x=y=false;//4th Row of the Truth Table
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"  ";
cout<<(!y?'T':'F')<<"   ";
cout<<(x&&y?'T':'F')<<"   ";
cout<<(x||y?'T':'F')<<"    ";
cout<<(x^y?'T':'F')<<"    ";
cout<<(x^y^x?'T':'F')<<"     ";
cout<<(x^y^y?'T':'F')<<"      ";
cout<<(!(x&&y)?'T':'F')<<"       ";
cout<<(!x||!y?'T':'F')<<"       ";
cout<<(!(x||y)?'T':'F')<<"     ";
cout<<(!x&&!y?'T':'F')<<"          ";
cout<<endl;
//Exit stage right    
return 0;}    