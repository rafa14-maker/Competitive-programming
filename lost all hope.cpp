#include<bits/stdc++.h>
using namespace std;
#define max 10000000
int i,j,k;

bool prime[max];

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

map<int,int>factor(int n)
{
    map<int,int>fac;

    while(n%2==0)
    {
        n/=2;
        fac[2]++;
    }

    for(i=3;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            n/=i;
            fac[i]++;
        }
    }
    if(n>2)
    {
        fac[n]++;
    }

    return fac;
}

int main()
{
    seive();
    cin>>k;
   /* map<int,int>acm=factor(k);

    map<int,int>::iterator it;

    for(it=acm.begin();it!=acm.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }*/
}
