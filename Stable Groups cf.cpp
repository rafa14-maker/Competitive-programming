#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
   long long  n,k,x;
   cin>>n>>k>>x;

   long long  arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);
  priority_queue<ll,vector<ll>,greater<ll> >pq;

   for(int i=1;i<n;i++)
   {
       if(arr[i]-arr[i-1]>x)
       {
           pq.push(arr[i]-arr[i-1]);
       }
    }


    while(!pq.empty() && k != 0) {
        long long tp = pq.top();
        long long need = (tp / x) - 1 + (tp % x != 0);
        if(need <= k) {
            k -= need;
            pq.pop();
        } else {
            break;
        }
    }

   cout<<pq.size()+1<<endl;
}

int main()
{
    //int q;
   // cin>>q;
    //while(q--)
        solve();
}

