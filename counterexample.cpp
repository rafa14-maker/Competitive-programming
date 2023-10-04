#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,r;
    cin>>l>>r;

    long long int a,b;

    for(long long int i=r;i>=l;i--)
    {
        for(long long int j=l;j<i;j++)
        {
            if(__gcd(i,j)!=1)
            {
                for(long long int k=j+1;k<=r;k++)
                {
                    if(k!=i&&k!=j&&__gcd(k,i)==1&&__gcd(k,j)==1)
                    {
                       cout<<j<<" "<<k<<" "<<i;
                       return 0;
                    }
                }
            }
        }
    }

    cout<<-1<<endl;
}
