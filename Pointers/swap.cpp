#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;


void swapping(int p1,int p2)// pass by value
{
    int temp=p1;
    p1=p2;
    p1=temp;
    cout<<&p1<<endl;
    cout<<&p2<<endl;
    cout<<p1<<" "<<p2<<endl;
}

int main(){
    int first=10;
    int second=20;
     cout<<&first<<endl;
    cout<<&second<<endl;
    swapping(first,second);
    cout<<first<<" "<<second<<endl;
    return 0;
}

