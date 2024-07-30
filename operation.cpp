#include<iostream>
using namespace std ;


int main(){
 int x = 5;
 int y = 10;

 cout<<"ADD : "<< x + y<<endl;
 cout<<"SOUS : "<< x - y<<endl;
 cout<<"MULT : "<< x * y<<endl;
 cout<<"DIV : "<< y / x <<endl;

cout<<"Increment before : "<< ++x<<endl; // +1 puis affiche x
cout<<"Increment after : "<< x++<<endl; // affiche x puis +1

cout<< x<<endl;
cout<<"Decrement before : "<< --y<<endl; // decr -1 puis affiche y
cout<<"Increment after : "<< y--<<endl; // affiche y puis --1 
cout<< y<<endl;
    return 0;
}