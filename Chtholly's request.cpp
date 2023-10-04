#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
       long long  a=i,b=i;
       while(b)
       {
           a=a*10+b%10;
          b/=10;
       }
       sum+=a;
    }
    cout<<sum%k<<endl;
}
