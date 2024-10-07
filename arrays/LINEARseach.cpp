#include<iostream>
using namespace std;


bool search(int a[],int count,int key){
    for (int i = 0; i < count; i++)
    {
        if(a[i]==key)
          return 1;
    }
    return 0;
}


int main()
{
    int count;
    cin>>count;
    int a[20];
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"enter thr elemnt to be seached:";
    int key;
    cin>>key;
     bool found=search(a,20,key);
      
    if(found){
        cout<<"key found "<<key<<endl;

    }
    else{
        cout<<"key not found"<<endl;
    }
 return 0;   
}