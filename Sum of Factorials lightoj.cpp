#include<bits/stdc++.h>
using namespace std;
using ll =unsigned long long;

int test;
ll arr[25];

void built()
{
   // ll sum=1,idx=1,px=1;
    arr[0]=1;
    for(int i=1;i<22;i++)
    {
        arr[i]=arr[i-1]*i;
    }
}

void solve()
{
   ll n;
  scanf("%lld",&n);
  printf("Case %d: ",++test);
    int i=20;
    vector<int>v;
    while(i>=0)
    {
        if(arr[i]<=n)
        {
            n-=arr[i];
            v.push_back(i);
        }
        i--;
    }
   if(n!=0)printf("impossible\n");
   else
   {
       bool kp=false;
       int len=v.size()-1;
       for(int i=len;i>=0;i--)
       {
           if(kp)printf("+");
           kp=true;
           printf("%lld!",v[i]);
       }
       printf("\n");
   }
}

int main()
{
    built();
   // for(int i=0;i<20;i++)cout<<arr[i]<<endl;
    int q;
   scanf("%d",&q);
    while(q--)solve();
}
