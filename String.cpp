#include<iostream>
#include<string.h>
using namespace std ;


int main(){
    
string FirstName="Amira";
string LastName=" FRIH";
string FullName=FirstName+LastName;

cout<<FullName<<endl;
cout<<"length of the Fullname is :"<<FullName.length()<<endl;

FullName[0]='Z';
cout<<"1 ere ABC de Fullname is :"<<FullName[0]<<endl;
}