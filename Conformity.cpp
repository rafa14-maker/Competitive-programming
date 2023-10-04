#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
       int frr[n+5];
       int arr[n+5][6];
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<5;j++)
           {
               cin>>arr[i][j];
               mp[arr[i][j]]++;

           }
       }
       for(int i=0;i<n;i++)
       {
           int sum=0;
           for(int j=0;j<5;j++)
           {
               sum+=mp[arr[i][j]];
           }
           frr[i]=sum;
       }
       sort(frr,frr+n);
       int flag=1;
       for(int i=n-2;i>0;i--)
       {
           if(frr[i]==frr[n-1])flag++;
       }
       cout<<flag<<endl;
    }
}
