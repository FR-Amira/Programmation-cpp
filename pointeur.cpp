#include<iostream>
using namespace std;

int main(){
double tab[]={5,8,7,6,2,4,6};
int *p;


for(int i=0; i<7 ;i++){
    
    cout<<"l'elements de tab \n"<<*(tab+i)<<endl; 
    cout<<"Addrese de tab \n"<<(tab+i)<<endl;
}


return 0;
}