#include<iostream>
using namespace std;
 

///  static data member
class A{

    private :

    public: 
    static int const a1=15;  //1 methode
    static int a2;        //2methode 
    int b;
    
    static void printA() {
        cout<<"A"<<endl;
    }
   static void printC() {
        cout<<"C"<<endl;
    }

};
 

  /// static fonction member 
 class X{

    private :

    public: 
      static int const x=100; 
      int k=20;
 
   static  void printX() {
        cout<<"X \t"<<x<<endl;
        // cout<<k<<endl; /// errur car fonction static w val non static lazem 2 static
    }

 static  void printP1() {
    static int i=0;  /// initialisation mara bark fi static donc bech ya5o 1 fois i=1 puis i++
        cout<<"I \t"<<i<<endl;
        i++;
        // cout<<k<<endl; /// errur car fonction static w val non static lazem 2 static
    }
    static  void printP2() {
      int i=0;  /// initialisation dima tet3wed fi int donc bech ya5o 0 chaque fois
        cout<<"I \t"<<i<<endl;
        i++;
        // cout<<k<<endl; /// errur car fonction static w val non static lazem 2 static
    }
};

int A::a2=66;
int main(){

   ///  static data member

A a;
a.b=10;
cout<<a.b<<endl;

a.printA();    //fi static etnjm ta3ml aff fonction bi clss wala bi object
A::printC();

cout<<a.a1<<endl;  //fi static etnjm ta3ml aff val bi clss wala bi object

A::a1;
cout<<A::a1<<endl;

cout<<A::a2<<endl;



  
  /// static fonction member 
  X::printX();
  
  //fonct i++ fi i static
  X::printP1();
  X::printP1();
  X::printP1();
  X::printP1();

   //fonct i++ int i
  X::printP2();
  X::printP2();
  X::printP2();

    return 0;
}