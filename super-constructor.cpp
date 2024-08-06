#include<iostream>
using namespace std;

class Animal{
    public :
      
 Animal(){
    cout<<"Animal constructor"<<endl;
 }

};

// Dog yorth men animal donc affiche constructor animal 1 w ba3ed constructur Dog
class Dog : public Animal{
public : 
 //kif yebda 3andik cons par defaut cons ta3ml Dog() : Animal() wala Dog() kif kif 
 // w kan 3andik barcha cons w ethb test3ml cons eli fiha variable  Dog() : Animal()
 Dog(int x) : Animal(){
    cout<<"Dog constructor :  "<<x<<endl;
 }


};


//berger  yorth men dog donc affiche constructor dog eli howa yorth men animal donc affi const animal w dog 
//w ba3ed constructur berger
/*
class BERGER : public Dog{
 public :
 BERGER(){
    cout<<"Berger constructor"<<endl;
 }
};

*/

class BERGER1 : public Animal{
 public :
 // nehaded amaho cons eli bech yafichi
 // cons 3ando  parmetre estd3 cons 3andoch parametre
 BERGER1(int n):Animal(){
    cout<<"Berger 1 constructor \t"<<n<<endl;
 }
};

class berger2 : public Dog{
 public :
 // cons 3ando  parmetre estd3 cons 3andoch parametre wbech ya3tih valeur men 3ando dog wala 3ando n fi cos emt3o 
 berger2(int x):Dog(x){
    cout<<"Berger 2 constructor \t"<<x<<endl;
 }
};
int main(){

 //1 methode de app object (constructor ) Dog d; 2 methode Dod d =Dog();

//Animal a;
//Dog d = Dog();
BERGER1 B1=BERGER1(7);  // cons par valeur

berger2 b2=berger2(54);







    return 0;
}