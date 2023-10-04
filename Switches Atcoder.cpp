#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[m+5];
    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            adj[i].push_back(a);
        }
    }
    int frr[m+5];
    for(int i=0;i<m;i++)cin>>frr[i];

    int flag=0;

    for(int i=1;i<=pow(2,n);i++)
    {
        map<int,int>mp;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                mp[j+1]++;
            }
        }
        int kp=0;
           for(int j=0;j<m;j++)
           {
               int fl=0;
               for(int k=0;k<adj[j].size();k++)
               {
                   if(mp[adj[j][k]]>0)fl++;
               }
               if(fl%2==frr[j])
               {
                   kp++;
               }
             //  cout<<fl<<endl;
           }
           if(kp==m)flag++;
    }
cout<<flag<<endl;
}
