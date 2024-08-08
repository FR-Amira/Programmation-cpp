#include<iostream>
using namespace std;
 

class A{

 private :

 public: 
  class B{

    public :

    void printA() {
        cout<<"A"<<endl;
  }
  
};
// 2 methode ta3ml void etndi fiha fon de clss b
       void printA() {
       B b;
       b.printA();
  }
};

int main(){
A a;
// 1 methode app clss B ba3ed etndi fonction
A :: B b;
b.printA();

//2methode etndi fonction de clss B bi clss A
// a.printA();

    return 0;
}

