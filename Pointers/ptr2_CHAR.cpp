#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int main(){
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<(void*)arr<<endl;
    cout<<static_cast<void*>(arr)<<endl;
     cout<<(void*)ptr<<endl;

     char name='a';
     char*ptr1=&name;
     cout<<(void*)&name<<endl;
     cout<<(void*)ptr1;
    return 0;  
}