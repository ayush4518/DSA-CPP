#include<iostream>
using namespace std;
void printArray(int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
    
}
void swapAlternate(int arr[],int count){
    for (int i = 0; i < count; i+=2)
    {
        if(i+1 < count){
            swap(arr[i],arr[i+1]);
        }
    }
     
}



int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
    
    swapAlternate(odd,5); 
    printArray(odd,5);
    cout<<endl;

    return 0;
}