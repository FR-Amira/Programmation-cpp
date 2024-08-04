#include<iostream>
using namespace std;


class person {
 public :
  string nom;
   int age;  
  void affiche(){
      cout<<"Nom :"<<this->nom<<endl;
      cout<<"Age: "<<this->age<<endl;
  } 

person(){
    cout<<"default constructor"<<endl;   // affiche sans appel dans main 
}  
person(string nomCons){
    this->nom=nomCons;

    cout<<"Nom fi cons: "<<nomCons<<endl;
}
person(string nomCons2,int ageCons2){
    this->nom=nomCons2;
    this->age=ageCons2;

    cout<<"Nom fi cons: "<<nomCons2<<endl;
    cout<<"Age fi cons: "<<ageCons2<<endl;
}
};


int main() {

 //person p1("Shahed");
 person p1("Shahed",14);
p1.nom="Amira";
p1.age=28;
p1.affiche();


    return 0;
}