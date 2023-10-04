#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,sum;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>j>>k;
        sum=0;

        if(j>k)
        {
            sum+=(j-k);
        }
        else
        {
            sum+=(k-j);
        }
        sum+=j;
        sum*=4;
        sum+=19;

        printf("Case %d: %d\n",i,sum);
    }
}
