#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int a,n,m,k,l,i,lcm,j,counter;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>lcm;

        k=__gcd(a,lcm);

       if((lcm/k)*a==lcm)
       {
           cout<<lcm/k<<endl;
       }
       else{
        cout<<"NO SOLUTION"<<endl;
        break;
       }

    }
}
