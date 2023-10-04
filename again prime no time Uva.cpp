#include<bits/stdc++.h>
using namespace std;
using ll = long long;

long long  bigmod(long long f,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2);
    x=(x*x);
    if(b%2==1)x=(x*f);

    return x;
}

vector<pair<int,int> >v;
ll n,m;

void f()
{
    for(int i=2;i*i<=n;i++)
    {
        int a=0,b=0;
        while(n%i==0)
        {
            a=i;
            n/=i;
            b++;
        }
        if(a!=0&&b!=0)v.push_back(make_pair(a,b));
    }
    if(n>1)
    {
        v.push_back(make_pair(n,1));
    }
}

int test;

void solve()
{
    v.clear();
    cin>>n>>m;
    f();

   /* for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/

    int mx = 1e8+7;
    bool tr=false;

    for(int i=0;i<v.size();i++)
    {
        int a = v[i].first;
        int b = v[i].second;


      int ans=0;

      int idx=1,pk=a;

       while(pk<=m)
       {
           ans += m/pk;
           idx++;
           pk = pow(a,idx);
       }

       if(ans<b)
       {
           tr=true;
           break;
       }


     mx = min(mx,ans/b);
    }
   printf("Case %d:\n",++test);
   if(!tr) cout<<mx<<"\n";
   else cout<<"Impossible to divide"<<"\n";

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
