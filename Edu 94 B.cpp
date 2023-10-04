#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
//ll a,b,c,d,e,f;
ll mn;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}


void f1(ll a,ll b,ll c,ll d,ll e ,ll f,int cnt,ll sum)
{
   bool tr=true;
    for(int pos=0;pos<4;pos++)
    {
        if(!Check(cnt,pos))
        {
            ll xr=0;
        tr=false;
    if(pos==0)
    {
        ll kp;
        if(e>0)kp=a/e;
        else kp=0;
        kp=min(kp,c);
        xr=0;
        xr+=kp;
        f1(max(a-kp*e,0LL),b,max(c-kp,0LL),d,e,f,Set(cnt,pos),sum+xr);
    }
    if(pos==1)
    {
        ll kp;
        if(f>0)kp=a/f;
        else kp=0;
        kp=min(kp,d);
        xr=0;
        xr+=kp;
        f1(max(a-kp*f,0LL),b,c,max(d-kp,0LL),e,f,Set(cnt,pos),sum+xr);
    }
    if(pos==2)
    {
        ll kp;
       if(e>0)kp=b/e;
        else kp=0;
        kp=min(kp,c);
        xr=0;
        xr+=kp;
       f1(a,max(b-kp*e,0LL),max(c-kp,0LL),d,e,f,Set(cnt,pos),sum+xr);
    }
    if(pos==3)
    {
        ll kp;
       if(f>0)kp=b/f;
        else kp=0;
        kp=min(kp,d);
        xr=0;
        xr+=kp;
       f1(a,max(b-kp*f,0LL),c,max(d-kp,0LL),e,f,Set(cnt,pos),sum+xr);
    }
        }
    }
    if(tr)
    {
        mn=max(mn,sum);
        return;
    }
}

void solve()
{
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    mn=0;
    f1(a,b,c,d,e,f,0,0);
    cout<<mn<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //solve();
}
