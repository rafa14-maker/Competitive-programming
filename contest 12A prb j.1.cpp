#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,p;
    cin>>n;
    i=0;
    while(n--)
    {
        cin>>k;
        p=k;
        i++;
        if(k%2!=0)
        {
           printf("Case %lli: Impossible\n",i);
        }
        else if(k%2==0)
        {
            j=0;
            while(k%2==0)
            {
                k/=2;
                j+=2;
            }


               printf("Case %lli: %lli %lli\n",i,k,p/k);

        }
    }

    return 0;
}
