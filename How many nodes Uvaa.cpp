#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll arr[55];

void f()
{
   arr[0]=1;
   arr[1]=1;
   for(int i=2;i<=30;i++)
   {
       for(int j=0;j<i;j++)
       {
           arr[i] += arr[i-j-1]*arr[j];
       }
   }
}

int main()
{
    f();
   ll n;
   while(scanf("%lld",&n)!=EOF)
   {
       int sum=0;
       for(int i=1;i<=30;i++)
       {
           if(arr[i]<=n)sum=i;
       }
       cout<<sum<<endl;
   }
}
