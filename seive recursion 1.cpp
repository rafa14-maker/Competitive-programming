#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    bool prime[n+1];

    memset(prime,true,n+1);

    int i,j;

    for(i=2;i*i<n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<n;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    for(i=2;i<n;i++)
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

    cout<<"prime numbers :"<<endl;

    seive(n);

    return 0;
}
