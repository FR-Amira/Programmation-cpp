#include<iostream>
using namespace std;
///  private : variable testa3mlhom kan fi clss emt3o **** protected : variable testa3mlhom kan fi clss emt3o w eli yortho 
/// public variable test3mlhom fi class emt3o w eli yoroth w fi main  
// clss par defaut private
class Animal{
    public :
      string name;
      int weight;
      void animalSoubd(){
        cout<<"animal Sound"<<endl;
      }

};

class Dog : public Animal {
public : 
 int x;
/// constructor
Dog(int x){
    this->x=x;

    cout<<"Nub de dog "<<x<<endl;
}
};

//inheritance  weratha clss berger werth clss animal  class BERGER : public Animal 

class BERGER : public Animal {
 public :
 void editName(){
  name="S";
  cout<<name<<endl;
 }

};


int main(){
Animal a;
Dog d(20);
BERGER B1;
B1.name="Alex";
cout<<B1.name<<endl;
B1.animalSoubd();
B1.editName();







    return 0;
}