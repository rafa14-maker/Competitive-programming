#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,sum=0;

    cin>>n;

    for(i=2;i<n;i++)
    {
        k=n;

        while(k>0)
        {
            sum+=(k%i);
            k/=i;
        }
    }

    printf("%d/%d\n",sum,n-2);
}
