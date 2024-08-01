#include<iostream>
using namespace std;

void affiche(){
    cout<<"Welcome to "<<endl;
}

void aff(string langage);

int sum(int a ,int b){

    return(a+b);
}
int main(){
string langage="python";
int x=10;
int y=45;

affiche();

aff("java");  // 2 methode langage ou "....."

int resulat=sum(x,y);
cout<<resulat<<endl;

    return 0;
}



void aff(string langage){
    cout<<langage<<endl;
}