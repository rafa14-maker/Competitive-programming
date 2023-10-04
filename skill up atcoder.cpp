#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+5][n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i][0];
        for(int j=1;j<=m;j++)cin>>arr[i][j];
    }

    long long mk=1e12;

     for(int i=1;i<=pow(2,n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(j+1);
            }
        }

       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

       long long sum=0;
        int frr[m+5]={0};
        for(int i=0;i<v.size();i++)
        {
          int pk=v[i];
          sum+=arr[pk][0];
          for(int j=1;j<=m;j++)
          {
              frr[j]+=arr[pk][j];
          }
        }
        bool vr=true;
        for(int i=1;i<=m;i++)if(frr[i]<k)vr=false;
        if(vr)mk=min(mk,sum);
    }
    if(mk==1e12)cout<<-1<<endl;
    else cout<<mk<<endl;
}
