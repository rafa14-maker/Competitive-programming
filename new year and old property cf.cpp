#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll Set(ll n,ll pos)
{
    return (n | (1<<pos));
}

bool Check(ll n,int pos)
{
    return (n & (1<<pos));
}

void solve()
{
    ll l,r;
    cin>>l>>r;

  //  int cnt = 0;

   // int idx = 0;

    vector<ll>v;
    vector<ll>idx;

    idx.push_back(2);

     v.push_back(1);
     v.push_back(2);

     ll sum = 3;

     for(int i=2;i<60;i++)
     {
         sum += pow(2,i);
         v.push_back(pow(2,i));
         for(int j=0;j<v.size()-1;j++)
         {
             idx.push_back(sum-v[j]);
         }
     }

     //cout<<idx.size()<<endl;

     int cnt = 0;
     for(int i=0;i<idx.size();i++)
     {
         if(l<=idx[i]&&idx[i]<=r)cnt++;
     }

     cout<<cnt<<endl;

    // for(int i=0;i<idx.size();i++)cout<<idx[i]<<endl;

}

int main()
{
    solve();
}
