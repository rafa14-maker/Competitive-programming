#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum=0,i;

    scanf("%d",&a);

    for(i=2;i<a;i++)
    {
        b=a;

        while(b>0)
        {
            sum+=b%i;
            b/=i;
        }

    }
    printf("%d/%d",sum,a-2);

    return 0;
}
