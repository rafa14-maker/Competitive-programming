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
    seive();
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl<<1<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<1<<endl<<1<<" "<<1<<endl;
        return 0;
    }
    cout<<2<<endl;
    for(int i=1;i<=n;i++)
    {
        if(prime[i+1])cout<<1<<" ";
        else cout<<2<<" ";
    }cout<<endl;
}
