#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,k=0,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        printf("\n");
        sum=0;
        k++;
        scanf("%d",&a);
        while(a--)
        {
            scanf("%d",&b);
            if(b>0)
            {
                sum+=b;
            }
        }
        printf("Case %d: %d\n",k,sum);
    }

    return 0;
}
