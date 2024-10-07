#include<iostream>
using namespace std;

int main(){
   int a[20],b[20];
   int n,m;
   cin>>n;
   cin>>m;

   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for (int j= 0; j < m; j++)
   {
    cin>>b[j];
   }
  int i=0,j=0;
   while(i<n&&j<m){
    if(a[i]==b[j]){
        cout<<a[i]<<" ";
    
         i++;
         j++;
    }
    else if(a[i]<b[j])
            i++;
   
   else{
        j++;}
  
}
cout<<endl;
   return 0;
   }