#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y;
    int s;
    
   
   //Probleme :  s=x/y;      // y=0 donc pg yetkracha car 10/0 w yo5rej = exception
       // donc solution na3mlo try kif y=0 e5rajli msg cach w enhoto pg fi boucle while bech yo93ed e3wed hata na3ti y diff 0 
     /*
     cout<<"entre a non null number"<<endl;
    cin>>y;
    s=x/y;      
    cout<<"s = "<<s<<endl;
       */

      //solution 
      while(true)
      {
        cout<<"entre a non null number"<<endl;
        cin>>y;
     try{
        if(y==0){
            throw "devided by zero exception";
        }
        s=x/y;
        cout<<"s = "<<s<<endl;
        break; //sortie men while
     }
     catch(const char*e){
        cout<<e<<endl;
     }
      }
    return 0;
}