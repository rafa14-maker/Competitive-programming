#include<bits/stdc++.h>
using namespace std;
#define max 1000000

int i,j,k,n;

bool prime[max];

void seive()
{
    for(i=2;i<max;i++)
    {
        prime[i]=true;
    }
    for(i=2;i*i<=max;i++)
    {
       if(prime[i]==true)
       {
           for(j=i*2;j<=max;j+=i)
           {
               prime[j]=false;
           }
       }
    }


}

map<int,int>factors(int n)
{
    map<int,int>fac;

    while(n%2==0)
    {
        n/=2;
        fac[2]++;
    }
    for(i=3;i<=sqrt(n);i+=2)
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

    cin>>n;

    map<int,int>num=factors(n);

    map<int,int>::iterator it;

    for(it=num.begin();it!=num.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }

    return 0;
}
