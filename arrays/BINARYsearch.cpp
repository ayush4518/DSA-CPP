#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int BinarySearch(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        if(key>a[mid]){
            start=mid +1;

        }
        else {
            end=mid-1;
        }
        mid =(start+end)/2;
    }
    return -1;
}

int main(){
    int a[20]={3,4,5,6,7,8,9,25,34,56,};

    int search=BinarySearch(a,10,56);

    cout<<"INDEX:"<<search<<endl;

    return 0;
}