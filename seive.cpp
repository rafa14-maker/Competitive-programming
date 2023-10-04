#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    bool prime[n+1];

    memset(prime,true,n+1);

    int  i,j;

    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
int counter=0;
    for(i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            counter++;
        }
    }
cout<<counter<<endl;
}
