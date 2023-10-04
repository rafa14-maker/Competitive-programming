#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,a,k=0;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&a);
        sum=0;
        k++;
        while(a>0)
        {
            sum+=a%2;
            a/=2;
        }
        if(sum%2==0)
        {
            printf("Case %d: even\n",k);
        }
        else
        {
           printf("Case %d: odd\n",k);
        }
    }

  return 0;
}
