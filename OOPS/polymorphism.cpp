#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"Hello Ayush Saini"<<endl;
    }
void sayhello(string name){
    cout<<"hello "<<endl;
}
// int sayhello(){
//     cout<<"HELLO"<<endl;
        // return 1;
// }
int sayhello(char name){
     cout<<"HELLO"<<endl;
         return 1;
 }



};


int main(){
    A obj;
    obj.sayhello();

    return 0;
}