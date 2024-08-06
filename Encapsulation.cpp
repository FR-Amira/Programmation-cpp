#include<iostream>
using namespace std;


class prof {

private: 
int note_math;

public:
  // set bech ta5o atrbu men main ...
void set_note_math(int note_math){
    if(note_math>=0 && note_math<=20){
        this->note_math=note_math;
     //cout<<note_math<<endl; methode pour aff note math 
    }
}

// get bech aff atribu
int get_note_math(){
    return this->note_math;
}

}Prof_math;


int main(){
// Prof_math.note_math(10); erreur car note math private 
Prof_math.set_note_math(25); // itha kan condition faux donc aff valeur intial 0

// Errur cout<<Prof_math.set_note_math(15);
cout<<Prof_math.get_note_math();
    return 0;
}