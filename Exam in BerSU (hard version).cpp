#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
    ll n,k;
     cin>>n>>k;

    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    ll sum=0,counter=0;
    vector<ll>v;
   priority_queue<ll>pq;


       for(int i=0;i<n;i++)
        {
        while(dq.size()>0&&sum+arr[i]>k)
        {
            //cout<<1<<endl;
            int f = pq.top();
          //  dq.pop_front();
            counter++;
            sum-=f;
        }
        sum+=arr[i];
        dq.push_back(arr[i]);
        v.push_back(counter);
    }
    for(int i=0;i<v.size();i++)printf("%lld ",v[i]);
    printf("\n");
}

int main()
{
    solve();
}
