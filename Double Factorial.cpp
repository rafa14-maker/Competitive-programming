#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a=2,ans=0;
    int p=0;
    while(true)
    {
        if(a>n)break;
        p++;
        a*=5;
    }
    if(n%2==0)
    {
       for(int i=1;i<=p;i++)
       {
           ans+=n/((long long)(2*pow(5,i)));
       }
    }
    cout<<ans<<endl;
}
