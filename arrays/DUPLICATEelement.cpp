#include<iostream>
using namespace std;
 int main()
{int ans=0;
int arr[7]={1,2,3,4,5,6,5};
for (int i = 0; i < 7; i++)
{
   ans=ans^arr[i];
}

for (int i = 0; i < 7; i++)
{
    ans=ans*i;
}
cout<<ans<<endl;;
}