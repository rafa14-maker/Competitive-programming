#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,k;
   cin>>n>>k;
   if(k==1&&n>1)
   {
       cout<<-1<<endl;
       return ;
   }
   vector<int>v;
   for(int i=1;i<k;i++)v.push_back(i);
   for(int i=n;i>=k;i--)v.push_back(i);
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

