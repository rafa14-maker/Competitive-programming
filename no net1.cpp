#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    bool prime[n+1];

    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
           for(int p=i*2;p<=n;p+=i)
           {
               prime[p]=false;
           }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    seive(n);

    return 0;
}
