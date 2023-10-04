#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

const ll maxn = 5* 1e18;
ll arr[500];
vector<ll>v;
vector<int>idx;
ll n;

void f()
{
   arr[0]=0;
   arr[1]=1;
   int i;
   for( i=2;i<=92;i++)
   {
       arr[i] = arr[i-1]+arr[i-2];
       if(arr[i]>maxn)break;
   }
}


void cal()
{
    v.clear();
    idx.clear();
    ll sum=0;
    for(int i=92;i>=0;i--)
    {
        if(n<=0)break;
        if(arr[i]<=n)
        {
            sum+=arr[i];
            n-=arr[i];
            v.push_back(arr[i]);
            idx.push_back(i-1);
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<idx.size();i++)cout<<idx[i]<<" ";cout<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    cout<<endl;

}

int main()
{
  f();
  while(scanf("%lld",&n)!=EOF)
  {
      cal();
  }
}
