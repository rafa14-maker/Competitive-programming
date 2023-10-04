#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k=m;
    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=1;

    if(k>0){
    for(int i=1;i<=n;i+=2)
    {
        if(k==0)break;
        arr[i]=0;
        k--;
    }}

    if(k>0)
    {
        for(int i=1;i<=n;i++)
        {
        if(arr[i]==1&&k>0)
        {
            arr[i]=0;
            k--;
             if(k==0)break;
        }
    }
    }
    int counter=0,f=0;

   // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";

   for(int i=1;i<=n;i++)
    {
        if(counter==0&&arr[i]==1)counter++;
     if(arr[i]==0&&arr[i+1]==1)
     {
         counter++;
     }
    }
    cout<<counter<<endl;
}
