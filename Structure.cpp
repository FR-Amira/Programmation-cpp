#include<iostream>
using namespace std;

          //fi clss lazem ethot public bech main ya3rf name /age/printt ...itha etnhi public error 
                           // par contre enjam en3wath clss bi structure w nahi public 
                           //car structure public w clss sans fonction public howa prive
class person
{
    public:
    string name;
    int age;
    void printt(){
        cout<<"Name :"<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
}p1,p2;

struct jobs
{
    string name;
    string job;
    void printjob(){
        cout<<"Name :"<<this->name<<endl;
        cout<<"job: "<<this->job<<endl;
    }
}j1,j2;

class A :jobs  ///clss A bech yorth clss person ama maynjmech yorth structure car wahed public w la5er prive ;;; clss dima prive
{
  public :
  int a;
};

struct B :jobs {    //struct enjm yorth struct w clss non probleme  dima resulat pblic
    int b;
};

int main(){
person p;
p.name="Amira";
p.age=28;
p.printt();

p1.name="Amal";
p1.age=29;
p1.printt();

p2.name="mohamed";
p2.age=34;
p2.printt();

j1.name="Amira";
j1.job="Engineering";
j1.printjob();

j2.name="Amal";
j2.job="Doctor";
j2.printjob();

///A a;      clss est prive mech public donc aya haja yorteha public maynjmech yafichifa donc nest3mlo structur
//a.job="doctor";  


B b;
b.name="ahmed";
b.job="developer";
b.printjob();

    return 0 ;
}