#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long k;
    cin>>k;
    if(k==1)
    {
        cout<<0<<endl;
        return ;
    }
    long long sum=1;
    long long mv=0,idx=1;
    for(int i=1;i<=1e5;i++)
    {
        sum+=idx;
        mv++;
        if(sum>=k)break;
        idx++;
        sum+=idx;
        mv++;
         if(sum>=k)break;
    }
    cout<<mv<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

