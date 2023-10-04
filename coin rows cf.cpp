#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;

int n;
ll arr[N];
ll frr[N];

void cal()
{
    for(int i=1;i<=n;i++)
    {
        arr[i] += arr[i-1];
        frr[i] += frr[i-1];
    }
}

void fun(bool tr)
{
        int idx = 0;
        ll pdx = 1e15;
        for(int i=1;i<=n;i++)
        {
            ll sum = max(arr[n]- arr[i],frr[i-1]);
            if(sum < pdx)
            {
                pdx = sum;
                idx = i;
            }
        }
        cout << pdx << endl;
}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)cin>>arr[i];
   for(int i=1;i<=n;i++)cin>>frr[i];
   cal();
 // int idx = fun(0);
 // cout << idx << endl;
 // for(int i=1;i<=idx;i++)arr[i] = 0;
 // for(int i=idx;i<=n;i++)frr[i] = 0;
 // cal();
  fun(1);
}

int main()
{
    CherryFrog;
    int q;cin>>q;while(q--)solve();
 //  solve();
}

