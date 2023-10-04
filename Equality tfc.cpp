#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n = 5;

   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       mp[i]++;
   }

   for(auto it=mp.begin();it!=mp.end();it++)
   {
       cout << it->first<<" "<<it->second<<endl;
   }


}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
 //  int q;cin>>q;while(q--)solve();
   solve();
}

