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
        for (int j = i+1; j < count-1; j++)
        {
           if(a[i]+a[j]==key)
                {cout<<a[i]<<"+"<<a[j]<<" "<<key<<endl;}
        }
        
    }
    
    return 0;
}