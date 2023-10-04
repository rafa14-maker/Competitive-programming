#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long sum=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                int a=__gcd(i,j);
                a=__gcd(a,k);
                sum+=a;
            }
        }
    }
    cout<<sum<<endl;
}
