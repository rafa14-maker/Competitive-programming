#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

bool prime[N];

void seive()
{
    for(int i=3;i<=N;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=N;i+=2)
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
    int q;
    cin>>q;
    seive();
    while(q--)
    {
         long long n;
         cin>>n;
        long long k=sqrt(n);
         if(k*k==n&&prime[k]&&k!=1)
         {
             cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;
    }
}
