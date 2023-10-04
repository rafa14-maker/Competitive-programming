#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  i,j,n,sum;

    scanf("%lld",&n);

    printf("1 ");

    for(i=n/2;i>=1;i--)
    {
        if(n%i==0)
        {
            sum=1;
            j=i+1;
            while(j<=n)
            {
             sum+=j;
             j+=i;
            }
            printf("%lld ",sum);
        }


    }
    cout<<endl;
}

