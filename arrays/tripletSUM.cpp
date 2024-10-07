#include<iostream>
using namespace std;

int main(){
    int a[20];
    int count;
    cin>>count;
    cout<<"enter elements:";
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];

    }
    int key;
    cin>>key;
     cout << "Pairs adding up to " << key << ":" << endl;

    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
          for (int k = i+2; k < count; k++)
          {
           if( a[i]+a[j]+a[k]==key){
            cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<endl;
           }
          }
          
        }
        
    }
    
    return 0;
}