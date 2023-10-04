#include<bits/stdc++.h>
using namespace std;

long long rec(long long  n,long long  i)
{
    if(i==0)
    {
        return 1;
    }
    else if(i==1)
    {
        return n;
    }
    else{
        long long r=rec(n,i/2);
        if(i%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*n;
        }
    }
}

int main()
{
    long long a,b,n,m,k=0,i,counter=0;

    cin>>n>>m;
    if(n==m)
    {
        cout<<"YES"<<endl;
        cout<<0<<endl;
    }

    else{
    i=2;

    while(k<m)
    {
       k=rec(n,i);
       i++;
       counter++;
    }

    if(k==m)
    {
        cout<<"YES"<<endl;
        cout<<counter<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }}


}
