#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   deque<int>q;
   int idx = 1e9;
   for(int i=0;i<n;i++)
   {
       if(arr[i]=idx)
       {
           idx=arr[i];
           q.push_front(arr[i]);
       }
       else
       {
           q.push_back(arr[i]);
       }
   }
   int cnt=0;
   bool tr=false;
   int idx=-1;
   while(!q.empty())
   {
       int f = q.front();
       if(!tr)idx = f;
       else
       {
           if(idx<f)cnt++;
           idx = f;
       }
       q.pop_front();
   }
   cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}

