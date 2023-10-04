#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long k;
    cin>>k;
    long long idx=1,idx2=3,p=0;
    while(k>0)
    {
        if(idx<=k)p++;
        k-=idx;
        if(k==0)break;
        idx+=(idx2*(idx2+1))/2;
        idx2*=2;
    }
    cout<<p<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
