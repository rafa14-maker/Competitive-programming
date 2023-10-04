#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int n;
ll d;

void solve()
{
    int frr[105];
    for(int i=1;i<=100;i++)frr[i]=0;

    for(int i=2;i<=n;i++)
    {
        int p = i;
        for(int j=2;j<=n;j++)
        {
            while(p%j==0&&p>0)
            {
                p/=j;
                frr[j]++;
            }
            if(p==0)break;
        }
    }
    bool tr=false;
    for(int i=2;i<=n;i++)
    {
        while(d%i==0&&d>0)
        {
            if(frr[i]==0)
            {
                tr=true;
                break;
            }
            d/=i;
            frr[i]--;
        }
    }

    if(d>1)
    {
       // cout<<d<<" ";
      //  cout<<"yes ";
        cout<<"0"<<endl;
        return ;
    }

    ll res=1;

    for(int i=2;i<=n;i++)
    {
        res *= (frr[i]+1);
    }

    cout<<res<<endl;

}

int main()
{
    while(1)
    {
        cin>>n>>d;
        if(n==0&&d==0)break;
        solve();
    }
}
