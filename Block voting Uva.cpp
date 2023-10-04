#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    int frr[n+5]={0};
    for(int i=0;i<=pow(2,n);i++)
    {
        vector<int>v;
        int k=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))k+=arr[j];
            else v.push_back(j);
        }
       if(k<=sum/2)
       {
           for(int j=0;j<v.size();j++)
           {
              if(arr[v[j]]+k>sum/2)
              {
                  frr[v[j]]++;
              }
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("party %d has power index %d\n",i+1,frr[i]);
    }
    printf("\n");
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
