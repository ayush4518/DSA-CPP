#include<iostream>
#include<limits.h>
#include<math.h>

using namespace std;

class Hero {

    private:  
    int health;
    public:
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
    //  static

    Hero ramesh;
    cout<<"Ramesh health is"<<ramesh.gethealth()<<endl;
    ramesh.sethealth(70);
    ramesh.level='a';
    cout<<"size of ramesh is:  "<<sizeof(ramesh)<<endl;

    cout<<"health is:"<<ramesh.gethealth()<<endl;
    cout<<"level is:"<<ramesh.level<<endl;

    return 0;
}