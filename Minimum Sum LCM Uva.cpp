#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll n;
int test;

void solve()
{
     if (n == 2147483647)
    {
         printf("Case %d: 2147483648\n",++test);
       // printf("2147483648\n");
        return;
    }

    ll sum=0;
    ll cnt=0;
    ll k =n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
            ll pk=1;
            while(n%i==0)
            {
                pk*=i;
                n/=i;
            }
            sum+=pk;
        }
    }
    if(k==n)
    {
       // cout<<k+1<<endl;
        printf("Case %d: %lld\n",++test,k+1);
        return ;
    }
    if(cnt==1&&n==1)
    {
      //  cout<<k+1<<endl;
      printf("Case %d: %lld\n",++test,k+1);
        return ;
    }
    if(n>1)sum+=n;

    printf("Case %d: %lld\n",++test,sum);
}

int main()
{
    while(1)
    {
        //ll n;
        cin>>n;
        if(n==0)break;
        solve();
    }
}
