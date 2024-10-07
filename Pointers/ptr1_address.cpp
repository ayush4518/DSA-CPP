#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int main(){
    int arr[40]={1,2,3,4,5,6,7};
    int *ptr=arr;

    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

// addressof
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

// value of 3rd element
    cout<<arr[3]<<endl;
    cout<<*(arr+3)<<endl;
      cout<<*ptr<<endl;
      cout<<*arr<<endl;

// sare address
     for(int i=0;i<5;i++){
        cout<<(arr+i)<<endl;
     }

      for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
     }  



     cout<<"values"<<endl;

for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
}

for(int i=0;i<5;i++){
    cout<<ptr+i<<endl;
}

for(int i=0;i<5;i++){
    cout<<*ptr<<" ";
    ptr++;
}
     

    return 0;
}


