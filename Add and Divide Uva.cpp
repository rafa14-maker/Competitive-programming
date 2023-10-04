#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(n==k)
    {
        cout<<2<<endl;
        return ;
    }
    if(n<k)
    {
        cout<<1<<endl;
        return ;
    }
    long long ans=0;
    if(k==1)ans++,k++;
    long long kp=k;
     while(n>0)
     {
         n/=kp;
         ans++;
         if(n<=0)break;
         kp*=k;
         ans++;
     }
     cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
