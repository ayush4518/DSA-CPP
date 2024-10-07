#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;


    class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    // paramerterised constructor
Hero(int health){
    cout<<"this ->"<<this<<endl;
   this-> health=health;
}

Hero(int health, char level){
    this->level=level;
    this->health=health;
}

void print(){
    cout<<level<<endl;
}




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

    // object created statiaclly
    cout<<"hi"<<endl;
    Hero ramesh(10);
    cout<<"Address of  ramesh:"<<&ramesh<<endl;
    ramesh.print();

    // dyanmaically
    Hero*h=new Hero();
    h->print();

    Hero temp(22,'B');
    temp.print();









    // static allocation
    // Hero a;
    // a.sethealth(80);
    // a.setlevel('a');
    // cout<<"level is:"<<a.level<<endl;
    // cout<<"health is:"<<a.gethealth()<<endl;

    // // dynamically alloactaion

    // Hero *b=new Hero;
    // b->setlevel('B');
    // b->sethealth(70);
    // cout<<"level is :"<<(*b).level<<endl;
    // cout<<"health is :"<<(*b).gethealth()<<endl;


    //  cout<<"level is :"<<b->level<<endl;
    // cout<<"health is :"<<b->gethealth()<<endl;

    
  
    return 0;
}