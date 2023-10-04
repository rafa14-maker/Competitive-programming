#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,a,b,j;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        int counter=0;

       int k=__gcd(a,b);

       k=b/a;

       if(b==k*a)
       {
           cout<<k<<endl;
       }
       else
       {
           cout<<"NO SOLUTION"<<endl;
       }

    }
}
