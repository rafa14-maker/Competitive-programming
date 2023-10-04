#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m,k,sum,i,j=0,counter;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        counter=0;

        for(i=n;i<=m;i++)
        {
           k=1;
            sum=0;
           while(k<=i)
           {
               sum+=k;
               k++;
           }
           if(sum%3==0)
           {
              counter++;
           }
        }
        j++;
        printf("Case %lld: %lld\n",j,counter);
    }
}
