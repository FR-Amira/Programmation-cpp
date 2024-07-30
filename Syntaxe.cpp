
#include<iostream>
using namespace std ;

int main(){
int x;
string name;

cout<<"Your name \t"<<endl;
getline(cin,name);  /// on utilise getline pour prend les espaces


 cout<<"Your number "<<"?"<<endl;
 cin>>x;
 
 cout<<"Your name : "<<name<<endl;
 cout<<"Your number is : "<<x;


    return 0;
}
