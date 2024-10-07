#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

class Hero{
    private :
    int health;
    public:
    char *Name;
    char level;

    Hero(){
        cout<<"deafult constructor called"<<endl;
        Name=new char[100];
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }


    // copy constructor
     Hero(Hero& temp)  //pass by refernce
    {
    cout<<"copy constructor called:"<<endl;
        this->health=temp.health;
        this->health=temp.level;
    }


    void print(){
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
    }


    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){

    Hero s(70,'C');
    s.print();


// Copy Constructor 
    Hero r(s);
  r.print();
   
    
    return 0;
}