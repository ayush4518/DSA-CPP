#include<iostream>
#include<limits.h>
using  namespace std;
int getMax(int a[],int n){
    int maxi=a[0];


    for (int i = 0; i < n; i++)
    {
       maxi= max(maxi,a[i]);
    //    if( a[i]>max)   
    //    { max=a[i];
    //    }
    }
    return maxi;
    
}
int getMin(int a[],int n){
    int mini=a[0];


    for (int i = 1; i < n; i++)
    {
        mini=min(mini,a[i]);
        
    //    if( a[i]<min) {
    //     min=a[i];
    //    }  
    }
    return mini;
}
int main()
{
    int size;
    cin>>size;
    int a[20];
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];

    }
    cout<<"THE MAXIMUM ELEMENT IS:"<<getMax(a,size)<<endl;
    cout<<"THE MINIMUM ELEMENT IS:"<<getMin(a,size)<<endl;
 return 0;   
}