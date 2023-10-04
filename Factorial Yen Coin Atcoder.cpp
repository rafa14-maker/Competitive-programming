#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main()
{
    ll n;
    cin>>n;
    ll cnt=0;
    while(n>0)
    {
        ll idx=1;
        for(int i=1;i<=n;i++)
        {
            if(idx*i>n)break;
            idx*=i;
        }
        n-=idx;
        cnt++;
    }
    cout<<cnt<<endl;
}
