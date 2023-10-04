#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,m,k,j=0;
    cin>>n>>m;
    long long sum=0;
    while(m--)
    {
        cin>>k;
        long long  c;
        if(j==0)
        {
            c=(k-1);
        }
        else if(j==k)
        {
            c=0;
        }
        else
        {
            c=(n-j)+k;
        }
        if(c>n)
        {
            c=c%n;
        }
        sum+=c;
        j=k;
    }
    cout<<sum<<endl;
}
