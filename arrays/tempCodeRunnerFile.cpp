#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int main(){
    int arr[200];
    int n;
    cin>>n;

    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    for (int i = n-2; i >=0; i--)
    {
        bool swapped=0;
        for (int j = 0; i <= i; j++)
        {
          if(  arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=1;
          }
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<n;i++ ){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
