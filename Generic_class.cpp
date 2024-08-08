#include<iostream>
using namespace std;

template<class T>
class A {
    public:
// int x; 
T x; // type emt3 x bech na5taro kif nesn3 clss 3an tari9 template(generic)
void printA(T n){
    cout<<"x = "<<x<<endl;
    cout<<"N = "<<n<<endl;
}

};
template<class E, class K>  //ta3ml template fo9 clss eli bech test3mlo
class B {
    public:
    void printB(E s ,K p){
    cout<<"S= "<<s<<endl<<"P = "<<p<<endl;
    
}
};

int main(){
    A<int> a; //bech enhot type x

    a.x=15;
    a.printA(25);

   A<string> b;
    b.x="AAA";
    b.printA("hhh");

   A<double> c; 
    c.x=15.22;
    c.printA(54.2);

B<int,int> d;
    
    d.printB(25,6);

B<string,string> J;
    
    J.printB("AMIRA","FRIH");
}