#include<iostream>
#include<cmath>
using namespace std ;


int main(){

    /// TYPE BOOLAIN

   // bool  true = 1 et false =0
int X=10; 
int Y=8; 
int Z=8;
cout<<X<<endl;
cout<<Y<<endl;
cout<< (X<=Y) <<endl;
   
   /// OPERATEUR LOGIQUE 
cout<<"OP logique ET \t"<<((Z==Y)&&(X<=Y))<<endl;
cout<<"OP logique OU \t"<<((Z==Y)||(X<=Y))<<endl;

cout<<"OP logique NOT \t"<<!((Z==Y)||(X==Y))<<endl;

   //// OPERATION MATHEMATIQUE
   cout<<max(5,10)<<endl;
   cout<<min(5,10)<<endl;
   cout<<sqrt(64)<<endl;
   cout<<round(2.6)<<endl;
   cout<<log(2)<<endl;

}