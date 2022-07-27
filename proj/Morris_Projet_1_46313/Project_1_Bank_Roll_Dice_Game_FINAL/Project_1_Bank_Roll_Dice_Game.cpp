 /*
 * File: Project_1_Bank_Roll_Dice_Game.cpp
 * Author: Kevin Morris
 * Created on July 23, 2022, 12:01 PM
 * Purpose: Bank Roll Dice Game
 */
//System Libraries
#include <iostream> //Stream Library
#include <fstream>  //File Library
#include <ctime>    //Time Library
#include <cstdlib>  //Standard Library
#include <iomanip>  //Manipulation Library
#include <string>   //String Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float CVN=1*100;
//Function Prototypes
class dice{
private:
    int sds,rll;
public:
    dice(int);
    dice(void);
    int Rolled(void);};
dice::dice(void){
    sds=6;
    srand(time(NULL));}
dice::dice(int sd){
    sds=sd;
    srand(time(NULL));}
int dice::Rolled(void){
    rll=(rand()%sds+1);
    return rll;}
//Execution Begins Here
int main(int argc, char** argv) {
// Initialize the Random Number Seed    
//Declare Variables
    int goal;
    char choice;
//Initialize Variables
    int PlyrScr=0,//Player Score
         BnkScr=0,//Bank Score
         RllVal=0,//Roll Value
         TmpTtl=0;//Temporary Total
    bool Plyrwn=0,//Player Wins
          Bnkwn=0,//Bank Wins
         Plyrtn=0;//Player's turn
      dice Rolly;//Function index     
//Map inputs to outputs-> The Process
//Display Results 
     string Plyrnm;
     cout<<"The rules are simple, ";//Rules
     cout<<"it is between you and the bank."<<endl;
     cout<<"First one to $1200.00 wins."<<endl;
     cout<<"Each roll of the die, is multiplied by $100.00"<<endl;
     cout<<"What is your name?"<<endl;
     cin>>Plyrnm;//Input Name
     goal=12;// Score goal
     PlyrScr=0,
     RllVal=Rolly.Rolled();//roll of the die
     
    do{
    Plyrtn=1;
    TmpTtl=0;
    RllVal=Rolly.Rolled();//roll of the die
    cout<<fixed<<setprecision(2);
    if(RllVal>1){
    RllVal=Rolly.Rolled();//roll of the die
    cout<<Plyrnm<<" you rolled "<<RllVal<<endl;
    
    if (RllVal>1){
    TmpTtl= TmpTtl+RllVal;//Temporary total for player
    cout<<Plyrnm<<"'s temporary total is "<<TmpTtl<<endl;
    cout<<"therefore "<<Plyrnm<<"'s total banked is $"<<PlyrScr*CVN<<endl;
    cout<<"Do you want to roll again? Y or N"<<endl;
    cin>>choice;
    
    
    if (RllVal>1){
    TmpTtl= TmpTtl+RllVal;//Temporary total for bank
    cout<<"banks temporary total is "<<TmpTtl<<endl;
    cout<<"banks total banked is $"<<BnkScr*CVN<<endl;}
    cout<<endl;//skip line
    
    if (choice=='Y'||choice=='y'){// Roll Again
    cout<<"You decided to roll again"<<endl;
    Plyrtn=1;}
    
    if (choice=='N'||choice=='n'){//No roll
    cout<<"You decided Not to roll again"<<endl;
    Plyrtn=0;}
    
    else {
    Plyrtn=0;
    PlyrScr=PlyrScr+TmpTtl;
    TmpTtl=0;}
    
    
    if(RllVal>1){
    Plyrtn=0;
    BnkScr=BnkScr+TmpTtl;
    TmpTtl=0;}
    
    
    }else{//lose turn if rolled 1
    cout<<endl;//skip line    
    cout<<"You rolled a 1, so you lose your turn."<<Plyrnm<<endl;
    TmpTtl=0;
    Plyrtn=0;}
    
    }else (Plyrtn);
    if(PlyrScr>=goal){
    Plyrwn=1;}
    
    else{
    TmpTtl=0;
    RllVal=Rolly.Rolled();//roll of the die
    cout<<"Bank rolled "<<RllVal<<endl;
    
    
    if (RllVal>1){
    BnkScr=BnkScr+TmpTtl;
    TmpTtl=0;}
        
    else{
    cout<<"Bank loses turn"<<endl;}
    }
    
    }while(!Plyrwn&&!Bnkwn);
    
    if(BnkScr>=12||PlyrScr<12){
    cout<<"Bank wins"<<endl;}
     
     else if(PlyrScr>=12||BnkScr<12){
    cout<<"Congratulations "<<Plyrnm<< " you win!!!"<<endl;}
     
//Exit stage right    
return 0;}