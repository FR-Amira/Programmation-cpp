#include<iostream>
using namespace std ;


int main(){
   // bool  true = 1 et false =0
int X=10; 
int Y=8; 
int Z=8;
cout<<X<<endl;
cout<<Y<<endl;
cout<< (X<=Y) <<endl;

cout<<"OP logique ET \t"<<((Z==Y)&&(X<=Y))<<endl;
cout<<"OP logique OU \t"<<((Z==Y)||(X<=Y))<<endl;

cout<<"OP logique NOT \t"<<!((Z==Y)||(X==Y))<<endl;

}