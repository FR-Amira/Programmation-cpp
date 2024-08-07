#include<iostream>
using namespace std;

/*  override

class Animal{
    public :
      string name;
      int weight;
      virtual void animalSoubd(){
        cout<<"animal Sound"<<endl;
      }

};

class Dog : public Animal {
public : 
 void animalSoubd() override{
        cout<<"hab hab"<<endl;
      }

};


class bird : public Animal {
 public :
 void animalSoubd() override {
        cout<<"saw saw"<<endl;
      }


};


int main(){
Animal a;
Dog d;
bird B1;

a.animalSoubd();
d.animalSoubd();
B1.animalSoubd();






    return 0;
}
 */

class Animal{
    public :
      string name;
      int weight;
      virtual void animalSoubd()=0;  // class animal wala obstract = formulaire donc ma3tech enjm nafichi 

};

class Dog : public Animal {
public : 
 void animalSoubd() override{
        cout<<"hab hab"<<endl;
      }

};


class bird : public Animal {
 public :
 void animalSoubd() override {
        cout<<"saw saw"<<endl;
      }


};


int main(){

Dog d;
bird B1;

d.animalSoubd();
B1.animalSoubd();






    return 0;
}