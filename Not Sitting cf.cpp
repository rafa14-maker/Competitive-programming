#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,m;
   cin>>n>>m;

   vector<int>v;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           int ans = max(i,n-i-1)+max(j,m-j-1);
           v.push_back(ans);
       }
   }

   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

