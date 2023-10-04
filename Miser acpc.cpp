#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6+6;
ll arr[N];

void solve()
{
    int n;
    cin>>n;
    ll idx=1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
             if(arr[a]>=idx)
            {
                idx=arr[a]+1;
            }
            arr[a]=idx;
        }
       // cout<<idx<<endl;
    }
   // ll kp=idx+1;
    cout<<idx<<endl;
}

int main()
{
    solve();
}
