#include<bits/stdc++.h>
using namespace std;
long long mn,mx,k;


void solve(int test)
{
    int n,m;
    cin>>n>>m;
    k=pow(2,m);
    mn=1e18;
    mx=0;
    for(int i=0;i<=pow(2,n);i++)
    {
        long long sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                sum*=10;
                sum+=1;
            }
            else
            {
                sum*=10;
                sum+=2;
            }
        }
        if(sum%k==0)
        {
            mx=max(mx,sum);
            mn=min(mn,sum);
        }

    }
    printf("Case %d: ",test);
    if(mn==1e18&&mx==0)cout<<"impossible"<<endl;
    else if(mn==mx)cout<<mx<<endl;
    else cout<<mn<<" "<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    int cnt=0;
    while(q--)
    {
        solve(++cnt);
    }
}
