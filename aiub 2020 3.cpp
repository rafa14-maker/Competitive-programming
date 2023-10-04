#include<bits/stdc++.h>
using namespace std;

int frr[1050];
using ll = long long;


void solve()
{
 int n,k;
 cin>>n>>k;
 int mx=0;
 for(int i=0;i<n;i++)
 {
     int a;
     cin>>a;
     mx=max(a,mx);
 }
 int kp=(mx*k);
 int pk=kp/1000;
 if(kp%1000!=0)pk++;
 cout<<pk<<endl;
}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}

