#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;

      int gethealth(){
        return health;

    }

    int getlevel(){
        return level;

    }
    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(int ch){
        level = ch;
    }
   
};

int main(){
    // static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('a');
    cout<<"level is:"<<a.level<<endl;
    cout<<"health is:"<<a.gethealth()<<endl;

    // dynamically alloactaion

    Hero *b=new Hero;
    b->setlevel('B');
    b->sethealth(70);
    cout<<"level is :"<<(*b).level<<endl;
    cout<<"health is :"<<(*b).gethealth()<<endl;


     cout<<"level is :"<<b->level<<endl;
    cout<<"health is :"<<b->gethealth()<<endl;

    
    return 0;
}