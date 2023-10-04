#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       v.push_back(b);
   }
   sort(v.begin(),v.end());
   int cnt=0,idx=0;
   for(int i=0;i<v.size();i++)
   {
       if(i==0)
       {
           idx=v[i];
           cnt++;
       }
       else if(v[i]<=idx+k)continue;
       else
       {
           idx=v[i];
           cnt++;
       }
   }
   printf("Case %d: %d\n",++test,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
