#include<bits/stdc++.h>
#define max 1000000
using namespace std;

bool prime[max];

int i,n,j;

void seive()
{
    for(i=2;i<max;i++)
    {
        prime[i]=true;
    }

    for(i=2;i*i<max;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }

}

map<int,int>factors(int k)
{
    map<int,int>fac;

    while(k%2==0)
    {
        fac[2]++;
        k/=2;
    }

    for(i=3;i<=sqrt(k);i++)
    {
        if(prime[i]==true)
        {
            while(k%i==0)
            {
                fac[i]++;
                k/=i;
            }
        }
    }

    if(k>2)
    {
        fac[k]++;
    }
    return fac;
}

int main()
{
    seive();

    cin>>n;

    map<int,int>acm=factors(n);

    map<int,int>::iterator it;

    for(it=acm.begin();it!=acm.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}

