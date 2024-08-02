#include<iostream>
using namespace std;

/// 1 methode clss
class person {
 public :
  string nom;
   int age;  
  void affiche(){
      cout<<"Nom :"<<this->nom<<endl;
      cout<<"Age: "<<this->age<<endl;
  } 
}p1;

//// 2 methode
class jobs {
 public :
  string nom;
  string job;  
  void print();

  int sommeExperiation(int s,int a)
  {
    return(s+a);
  }
};

  void jobs::print(){
      cout<<"Nom :"<<this->nom<<endl;
      cout<<"job: "<<this->job<<endl;
  }

int main() {

p1.nom="Amira";
p1.age=28;
p1.affiche();

jobs j1;
j1.nom="Amal";
j1.job="doctor";
j1.print();
cout<<j1.sommeExperiation(2,5);
    return 0;
}