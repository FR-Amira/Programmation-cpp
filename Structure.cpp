#include<iostream>
using namespace std;

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

    return 0 ;
}