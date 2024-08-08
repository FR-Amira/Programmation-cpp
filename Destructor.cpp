#include<iostream>
using namespace std;


class A {
    public :

A(){
    cout<<"constructor A"<<endl;   // chaque object 3ando cons par defaut ; kif tesn3 object de clss fi main ya3ml const app wahdo
}

~A(){
    cout<<"destructor A"<<endl;   // supprime (yedmar) les object ba3ed maykmel execute main{}
}
};


class B {
    public :

B(){
    cout<<"constructor B"<<endl;   
}

~B(){
    cout<<"destructor B"<<endl;   
}
};

class C {
    public :

C(){
    cout<<"constructor C"<<endl;   
}

~C(){
    cout<<"destructor C"<<endl;   
}
};

int main(){
    A a;
    B b;
    C c;
}