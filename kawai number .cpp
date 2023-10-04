#include<bits/stdc++.h>
using namespace std;
#define max 10000005

bool prime[max];

void seive()
{
    memset(prime,true,max);

    for(int i=2;i<max;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    seive();
    for(int i=2;i<=10;i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
        }
    }
}
