#include<bits/stdc++.h>
using namespace std;

const int N = 1e9+7;

int main()
{
    int n,m;
    cin>>n>>m;
    if(abs(n-m)>=2)
    {
        cout<<0<<endl;
        return 0;
    }
    long long mn=1,mp=1;
    for(int i=1;i<=n;i++)
    {
        mn*=i;
        mn=mn%N;
    }
    for(int i=1;i<=m;i++)
    {
        mp*=i;
        mp=mp%N;
    }
   long long sum=mp*mn;
   sum=sum%N;
   if(n==m)sum=2*sum;
   sum=sum%N;
   cout<<sum<<endl;
}
