#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;

bool prime[N];

void seive()
{
    for(int i=1;i<=N;i++)prime[i]=true;

    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=N;j+=i)
            {
              prime[j]=false;
            }
        }
    }
}

int main()
{
    seive();
    //for(int i=1;i<=20;i++) if(prime[i]==true)cout<<i<<" ";
    int n;
    cin>>n;
    long long arr[n+5],m=1e13;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m=min(arr[i],m);
    }
    set<long long>v;
    for(int i=1;i<=N;i++)
    {
        if(i>m)break;
        if(prime[i]==true)
        {
            if(m%i==0)
            {
                v.insert(i);
            }
        }
    }
    set<long long>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
       long long c=*it;
        v.insert(m/c);
    }

       for(it=v.begin();it!=v.end();it++)
    {
       cout<<*it<<endl;
    }
}
