#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k=0,l;

   int arr[1005];

   for(i=0;i<1001;i++)
   {
       arr[i]=0;
   }
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>l;
        arr[l]++;
        k=max(k,arr[l]);
    }
    if(k>(n+1)/2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
