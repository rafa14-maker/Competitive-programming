#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,k=1,sum=1,b=2;

    cin>>n;



    k=n;

    for(i=n/2;i<=n;i++)
    {
       if(k%i!=0)
       {
           b++;
           k*=b;
           i=2;
       }

    }


    cout<<k<<endl;
}
