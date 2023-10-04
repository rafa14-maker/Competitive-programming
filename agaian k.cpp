#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int a,n,m,k,l,i,lcm,j,counter,p,c;

    cin>>n;

    if(n>100000)
    {
        return 0;
    }

    for(i=0;i<n;i++)
    {

        cin>>a>>lcm;

        if(a<=0||lcm>pow(10,7))
        {
            return 0;
        }
     k=__gcd(a,lcm);

     p=(a*lcm)/k;
     if(lcm%a!=0)
     {
         cout<<"NO SOLUTION"<<endl;
     }
     else
     {


     cout<<p/k<<endl;}

    }

    return 0;
}
