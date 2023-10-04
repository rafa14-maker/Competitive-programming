#include<bits/stdc++.h>
using namespace std;

void seiveof(int n)
{
    bool prime[n+1];

    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2;i<=n;i+=p)
            {
                prime[i]=false;
            }
        }
    }

    for(int i=2;i<50;i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
        }
    }

}

int main()
{
    int n=1000000;
    seiveof(n);
 cin>>n;
    return 0;
}
