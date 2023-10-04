#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   vector<int>v;
   int cnt = 0,mx = 0;
   for(int i=0;i<n;i++)
   {
       if(cnt%2==0)
       {
           if(mx<arr[i])mx = arr[i];
           else
           {
               v.push_back(mx);
               cnt ++;
               mx = arr[i];
           }
       }
       else
       {
           if(mx>arr[i])mx = arr[i];
           else
           {
               v.push_back(mx);
               cnt++;
               mx = arr[i];
           }
       }
   }
   if(cnt%2==0)v.push_back(mx);

   ll sum = 0;

   int len  = v.size();
   if(len%2==0)len--;

   for(int i=0;i<len;i++)
   {
       if(i%2==0)sum += v[i];
       else sum-=v[i];
   }

   cout << sum << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

