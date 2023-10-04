#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k,rem,sum=0,l;

    cin>>n;

    for(i=2;i<n;i++)
    {
        k=n;
        while(k>0)
        {
            rem=k%i;
            sum+=rem;
            k/=i;
        }
    }
   l=__gcd(sum,n-2);

   cout<<sum/l<<"/"<<(n-2)/l<<endl;

}
