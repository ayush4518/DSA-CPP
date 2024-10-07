#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

class  Animal{
    public:
    int age;
    int weight;


    public :
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    
};


class GermanShephard:public Dog{

};

int main(){

   GermanShephard g;
   g.speak();

    return 0;
}