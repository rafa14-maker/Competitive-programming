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
    for(int i=1;i<n;i++)
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
           k=max(k,flag+1);
            len=max(len,flag+1);
            r[i]=t[flag];
        }
        else
        {
            flag=ceil(flag/2);
            t[flag]=i;
          if(flag!=0)  r[i]=flag;
        }
        cout<<flag<<endl;
    }
   cout<<"length of the LIS :"<<len<<endl;

   cout<<endl;

   cout<<"string :";

   k=t[len];

   while(k!=-1)
   {
       cout<<arr[k]<<" ";
       k=r[k];
   }
}
/*
11
3 4 -1 5 8 2 3 12 7 9 10
*/

