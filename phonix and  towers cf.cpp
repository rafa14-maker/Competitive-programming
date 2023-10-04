#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,k;
   cin>>n>>m>>k;
   int arr[n+5];
   priority_queue<pair<int,int> >pq;
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   for(int i=1;i<=m;i++)
   {
       pq.push(make_pair(0,i));
   }

   vector<int>v;

   for(int i=0;i<n;i++)
   {
       pair<int,int>f = pq.top();
       pq.pop();
       int a = f.first;
       int b = f.second;
       a+= (-arr[i]);
       v.push_back(b);
       pq.push(make_pair(a,b));
   }

   int ak = 0, bk = 0;

   while(!pq.empty())
   {
         pair<int,int>f = pq.top();
       pq.pop();
       int a = f.first;
       int b = f.second;
       if(ak==0)ak = ((-1)*a);
       bk = ((-1)*a);
   }

   if(abs(ak-bk)>k)cout<<"NO"<<endl;
   else
   {
       cout<<"YES"<<endl;
       for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
   }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}
