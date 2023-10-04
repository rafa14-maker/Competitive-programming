#include<bits/stdc++.h>
using namespace std;

void solve()
{
   queue<pair<long long,long long> >pq;
   int n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
       int pk;
       cin>>pk;
       pq.push({pk,1});
   }
   long long sum=0;
   bool tr=true;
   while(!pq.empty())
   {
       pair<long long,long long>a=pq.front();
       sum+=(a.first*a.second);
       pq.pop();
       if(a.first%k!=0)tr=false;
       if(tr)pq.push({a.first/k,a.second*k});
   }
   cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
