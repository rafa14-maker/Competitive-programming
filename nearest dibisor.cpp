#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans=0;
    cin>>n;
    while(1==1)
    {
        long long a=n,sum=0;
        while(a>0)
        {
            sum+=a%10;
            a/=10;
        }
        if(sum%4==0)
        {
            ans=n;
            break;
        }
        n++;
    }
    cout<<ans<<endl;
}
