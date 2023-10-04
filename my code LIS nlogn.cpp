#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int r[n+5],t[n+5];
    for(int i=0;i<n;i++)
    {
        t[i]=0;
        r[i]=-1;
    }
    t[0]=0;
  int  k=0,len=0;
    for(int i=0;i<n;i++)
    {
        int flag=-1;
        for(int j=k;j>=0;j--)
        {
           if(arr[i]>arr[t[j]])
           {
               flag=j;
               break;
           }
        }
        if(flag!=-1)
        {
            t[flag+1]=i;

            r[i]=flag;

            len=max(len,flag+1);
        }
        else
        {
            flag=ceil(flag/2);
            t[flag]=i;
            r[i]=flag;
        }
    }
    for(int i=0;i<n;i++)cout<<r[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)cout<<t[i]<<" ";
    cout<<endl;
    cout<<len<<endl;
}
/*
11
3 4 -1 5 8 2 3 12 7 9 10
*/
