#include<iostream>
using namespace std;

int main(){
int Time =10;
string Resultat;



if(Time<11){
    cout<<"BONJOUR"<<endl;
}
else{ 
    cout<<"Bon Appetit"<<endl;
}
 

Resultat = (Time<11)?"BONJOUR":"Bon Appetit";
cout<<Resultat<<endl;

////////////  SWITCH
int day=7;

switch (day)
{
case 1:
    cout<<"Monday";
    break;
 case 2:
    cout<<"Tuesday";
    break;
case 3:
    cout<<"Wednesday";
    break;
case 4:
    cout<<"Thursday";
    break;
case 5:
    cout<<"Friday";
    break;
case 6:
    cout<<"Saturday";
    break;
case 7:
    cout<<"Sunday";
    break;
default:
  cout<<"choose NB day in 1 ... 7 ";
    break;
}
  

   ////////////// while

   int i=0;

   while(i<=4){
    cout<<i<<endl;
    i++;
   }

 

 //////////// DO WHILE  : au moins 1 fois
 int y=6;
do
{
   cout<<y<<endl;
   y++;
} while (y<5);

 

 /////// LOOP
 for ( int iz = 0; iz < 5; iz++)
 {
    cout<<iz<<endl;
 }
  

  //////// break continue
 
   for ( int k = 0; k < 5; k++)
 {
    if(k==2){
        break;  /// sortie men boucle for
    }
      cout<<k<<endl;
 }

   for ( int k = 0; k < 5; k++)
 {
    if(k==2){
        continue; // non affiche condtion eli ta7et continue puis ekml boucle for k<5
    }
      cout<<k<<endl;
 }


////////// Tableaux
int Tab[5]={15,5,7,66,88};
for ( int m = 0; m < 5; m++)
 {
    cout<<Tab[m]<<endl;
 }
  

}