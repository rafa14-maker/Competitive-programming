#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a,b=0,i,k;
    cin>>a;
    for(i=1;i<=a;i++)
    {
     cin>>k;
        if(i==1||k==1)
        {
            b+=k;
        }
        else
        {
          k*=i;
          k-=i-1;
          b+=k;
        }

    }
    cout<<b<<endl;
}
