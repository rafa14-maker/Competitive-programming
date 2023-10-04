#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll dx = n/2 ,idx = 0;
    ll pk = arr[dx];

    for(int i=dx+1;i<n;i++)
    {
        ll sum = arr[i]-arr[i-1];
        idx ++;
        sum = sum*idx;
        if(sum>k)
        {
           ll hx = k/idx;
           pk+=hx;
           k=0;
           break;
        }
        else
        {
            pk = arr[i];
            k-=sum;
        }
    //   cout<<sum<<" "<<pk<<" "<<idx<<" "<<k<<endl;
    }

    if(k>0)
    {
        idx++;
        ll hx = k/idx;
       // cout<<hx<<endl;
        pk+=hx;
    }
    cout<<pk<<endl;
}

int main()
{
    solve();
}
/*

7 9
1 2 3 5 7 9 11

 */
