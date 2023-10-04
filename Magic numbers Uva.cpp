#include<bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    int d[10]={0};
    while(n>0)
    {
        int r=n%10;
        if(d[r]==1)return false;
        d[r]=1;
        n/=10;
    }
    return true;
}

void solve(){

     vector<pair<long long,long long> >v;

     long long n;
     scanf("%lld",&n);

     for(int i=1;;i++)
     {
         if(i*n>=1e10)break;
         if(check(i)&&check(i*n))
         {
             v.push_back(make_pair(i,i*n));
         }
     }
     sort(v.begin(),v.end());

     for(int i=0;i<v.size();i++)
     {
         printf("%lld / %lld = %lld\n",v[i].second,v[i].first,n);
     }
    //cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        if(q)puts("");
    }
}
