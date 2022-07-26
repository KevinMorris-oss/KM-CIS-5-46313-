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
class dice{//Class
private:
    int sds,roll;
public:
    dice(int);//Passed sides
    dice(void);//Six sides
    int rolled(void);};//Return value & renew roll
// Initialize the Random Number Seed     
dice::dice(void){
    sds=6;
    srand(time(NULL));}
dice::dice(int sd){
    sds=sd;
    srand(time(NULL));}
int dice::rolled(void){
    roll=(rand()%sds+1);
    return roll;}
//User Libraries
//Global Constants
//const float CVN=1*100;
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {  
//Declare Variables
    float goal=12;//Goal value
    char choice;//User choice
//Initialize Variables
    float PlyrScr=0,
           BnkScr=0,
           TmpTtl=0,
           RllVal=0;
    bool   Plyrwn=0,
            Bnkwn=0,
           Plyrtn=0;
        dice Rolly;     
//Map inputs to outputs-> The Process
//Display Results 
     string Plyrnm;
     cout<<fixed<<setprecision(2);
     goal=12;
     cout<<"The rules are simple, ";//Game Rules
     cout<<"it is between you and the bank."<<endl;//Game Rules
     cout<<"Anything greater than 1 will progress."<<endl;
     cout<<"First one to $12 wins."<<endl;//Game Rules
     cout<<"Each roll of the die, is multiplied by $100.00"<<endl;//Game Rules
     cout<<"What is your name?"<<endl;
     cin>>Plyrnm;//Input name
     cout<<endl;//Skip a line
     PlyrScr=0,//Players scorecard
     RllVal=Rolly.rolled();//roll of the die
     
    do{
    Plyrtn=1;//Player turn
    TmpTtl=0;//Temporary total
    RllVal=Rolly.rolled();//roll of the die
    
    if(RllVal>1){
    RllVal=Rolly.rolled();//roll of the die
    cout<<Plyrnm<<" you rolled "<<RllVal<<endl;}//Roll conformation
    
    if (RllVal>1){//Condition
    TmpTtl= TmpTtl+RllVal;//Temporary total
    cout<<Plyrnm<<"'s temporary total is $"<<TmpTtl<<endl;
    cout<<"Therefore "<<Plyrnm<<"'s total banked is $"<<PlyrScr<<endl;
    cout<<"Do you want to roll again "<<Plyrnm<<"? Y or N"<<endl;//Play again
    cin>>choice;}//Input Y for yes or N for no
  
    if (RllVal>1){//Condition
    BnkScr= TmpTtl+RllVal;//Temporary total
    cout<<endl;
    cout<<"The banks temporary total is $"<<TmpTtl<<endl;
    
    if (choice=='Y'){//Condition
    Plyrtn=1;}
    
    else{
    Plyrtn=0;
    PlyrScr=PlyrScr+TmpTtl;//Player total
    TmpTtl=0;}//Temp
    
    }else
    {//lose turn
    cout<<"You rolled a 1, this means you lose your turn."<<endl;
    TmpTtl=0;//Temp
    Plyrtn=0;}
    
    if(PlyrScr>=goal){
    Plyrwn=1;}
    
    else{
    TmpTtl=0;//Temp
    RllVal=Rolly.rolled();//roll of the die
    cout<<"Bank rolled "<<RllVal<<endl;
    cout<<"Therefore the banks total banked is $"<<BnkScr<<endl;
    cout<<endl;//Skip a line
    
    if (RllVal>1){//Condition
    BnkScr=BnkScr+TmpTtl;//Bank total
    TmpTtl=0;}//Temp
    
    else{
    cout<<endl;//Skip a line   
    cout<<"Bank loses turn"<<endl;}
    }
    
    }while(PlyrScr<=12||BnkScr<=12);
    
    if(PlyrScr<12||BnkScr<12){//Condition
    cout<<"No winner"<<endl;}
 
    if(PlyrScr>=12||BnkScr>=12){//Condition
    cout<<"Congratulations "<<Plyrnm<< " you win!!!"<<endl;}
    
    if(PlyrScr<=12||BnkScr>=12){//Condition
    cout<<"That sucks the bank just won "<<endl;}
    
    
    
//Exit stage right    
return 0;}