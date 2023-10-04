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
    int n;
    cin>>n;
    seive();
    for(int i=2;i<n;i++)
    {
        int a=n-i;
        if(!prime[a]&&!prime[i])
        {
            cout<<i<<" "<<a<<endl;
            return 0;
        }
    }
}
