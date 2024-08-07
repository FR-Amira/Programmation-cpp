#include<iostream>
using namespace std;
 
   // const
class A{

    private :

    public: 
    const int a1=10;
    
    void printA()const {
        cout<<"A"<<endl;
    }
  

};
 
 // static
 class B{

    private :

    public: 
      static int b; //1 methode + e9bl main int B::b=20;
      // static int const b=12; //2 methode
 
   static  void printB() {
        cout<<"B"<<endl;
    }

};

// fi static on changer les variable avant main 
int B::b=20;
int main(){
   // class const 
    const A a;
   // errur b const a.a1=20;
    a.printA();
   

   // clss static
 //1 methode  
   B b1;
   //b1.printB();  // affi bi object
  // errur b1 static b1.b=20;
 //2 methode  
  B::printB();  // affi bi clss sans utise object

cout<<B::b<<endl;
    return 0;
}