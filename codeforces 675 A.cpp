#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;

    cin>>n>>m;

    int frr[n+5][m+5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>frr[i][j];
    }

    long long sum=0;

    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        for(int a=0,b=m-1;a<=b;a++,b--)
        {
            vector<int>v;
            v.push_back(frr[i][a]);
             v.push_back(frr[i][b]);
              v.push_back(frr[j][a]);
               v.push_back(frr[j][b]);
               sort(v.begin(),v.end());
              int idx=v[1]+v[2];
              cout<<idx<<endl;
               idx/=2;

           // long long idx=frr[i][a]+frr[j][a]+frr[i][b]+frr[j][b];
          //  idx/=4;
            long long kp=0;
            kp+=abs(idx-frr[i][a]);
             kp+=abs(idx-frr[j][a]);
              kp+=abs(idx-frr[i][b]);
              kp+=abs(idx-frr[j][b]);
              frr[i][a]=idx;
              frr[i][b]=idx;
              frr[j][a]=idx;
              frr[j][b]=idx;
            sum+=kp;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<frr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
