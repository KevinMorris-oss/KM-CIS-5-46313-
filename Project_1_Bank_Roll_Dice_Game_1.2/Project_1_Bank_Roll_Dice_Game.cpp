 /*
 * File: Project_1_Bank_Roll_Dice_Game.cpp
 * Author: Kevin Morris
 * Created on July 23, 2022, 12:01 PM
 * Purpose: Bank Roll Dice Game
 */
//System Libraries
#include <iostream>//Stream Libray
#include <ctime>//Time Library
#include <cstdlib>//Standard Library
#include <string>//String Library
#include <iomanip>//Manipulation Library
using namespace std;
class dice{
private:
    int sds,roll;
public:
    dice(int);
    dice(void);
    int rolled(void);};
dice::dice(void){
    sds=6;
    std::srand(std::time(NULL));}
dice::dice(int s){
    sds=s;
    std::srand(std::time(NULL));}
int dice::rolled(void){
    roll=(std::rand()%sds+1);
    return roll;}
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Initialize the Random Number Seed    
//Declare Variables
    int goal=12;
    char choice;
//Initialize Variables
    int PlyrScr=0,
         BnkScr=0,
         RllVal=0,
         TmpTtl=0;
    bool Plyrwn=0,
          Bnkwn=0,
         Plyrtn=0;
      dice Rolly;     
//Map inputs to outputs-> The Process
//Display Results 
     std::string Plyrnm;
     std::cout<<"Explain rules"<<std::endl;
     goal=12;// Score goal
     Plyrnm="Kevin";// Player input
     PlyrScr=0,
     RllVal=Rolly.rolled();//roll of the die
     
    if (RllVal>1){
    Plyrtn=1;
    TmpTtl=0;
    RllVal=Rolly.rolled();}//roll of the die
     
    do{
    RllVal=Rolly.rolled();//roll of the die
    std::cout<<"Player "<<Plyrnm<<" You rolled "<<RllVal<<std::endl;
    
    if (RllVal>1){
    TmpTtl= TmpTtl+RllVal;
    std::cout<<"Your temporary total is "<<TmpTtl<<std::endl;
    std::cout<<"Your total banked is "<<PlyrScr<<std::endl;
    std::cout<<"Do you want to roll again? Y or N"<<std::endl;
    std::cin>>choice;
    
    if (choice=='Y'){
    std::cout<<"You decided to roll again"<<std::endl;
    Plyrtn=1;}
    
    else{
    Plyrtn=0;
    PlyrScr=PlyrScr+TmpTtl;
    TmpTtl=0;}
    
    }else
    {//lose turn
    std::cout<<"You rolled a 1, this means you lose your turn."<<std::endl;
    TmpTtl=0;
    Plyrtn=0;}
   
    if(PlyrScr>=goal){
    Plyrwn=1;}
    
    else{
    TmpTtl=0;
    RllVal=Rolly.rolled();//roll of the die
    std::cout<<"Bank rolled "<<RllVal<<std::endl;
    
    if (RllVal>1){
    BnkScr=BnkScr+TmpTtl;
    TmpTtl=0;}
    
    else{
    std::cout<<"Bank loses turn"<<std::endl;}
    }
    
    }while(PlyrScr<12||BnkScr<12);
    
    if(PlyrScr<12||BnkScr>=12){
        cout<<"Bank wins"<<endl;}
     
    if(PlyrScr>=12||BnkScr<12){
        cout<<"Congratulations you win!!!"<<endl;}
//Exit stage right    
return 0;}