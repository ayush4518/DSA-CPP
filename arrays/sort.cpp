#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

void printArray(int a[],int count){
    for (int i = 0; i < count; i++)
    {
       cout<<a[i]<<" ";
    }
}
void sort(int a[],int count){
    int left=0,right=count-1;
    while(left<right){
        while(a[left]==0){
            left++;
        }
        while(a[right]==1){
            right--;
        }
        swap(a[left],a[right]);
        left++;
        right--;
    }
}
    


int main(){
    int a[20];
    int count;
    cin>>count;
    cout<<"enter elements:";
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    sort(a,count);
    printArray(a,count);

    return 0;
}