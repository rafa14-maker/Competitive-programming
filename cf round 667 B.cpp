#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    long long ak=a,bk=b,ck=x,dk=y;
    long long f=a-x;
    long long e=b-y;
    long long k;
    long long cnt=1e12;
    if(f>=e)
    {
        k=min(n,f);
        n-=k;
        n=max(n,0LL);
        a-=k;
        if(n>0)
        {
        k=min(n,e);
        n-=k;
        n=max(n,0LL);
        b-=k;

        }
        cnt=min(cnt,a*b);
    }
     else
    {
        k=min(n,e);
        n-=k;
        n=max(n,0LL);
        b-=k;
        if(n>0)
        {
           k=min(n,f);
        n-=k;
        n=max(n,0LL);
        a-=k;
        }
         cnt=min(cnt,a*b);
    }
    cout<<cnt<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

