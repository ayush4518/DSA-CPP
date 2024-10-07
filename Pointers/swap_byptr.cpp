#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

void swapping(int *p1,int *p2)// pass by pointer
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<p1<<endl;
    cout<<p2<<endl;
    
}

int main(){
    int first=10;
    int second=20;
    swapping(&first,&second);
    cout<<first<<" "<<second<<endl;
  cout<<&first<<" "<<&second<<endl;
    return 0;
}