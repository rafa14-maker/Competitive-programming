#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,sum,p=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        {
            sum=a-b;
        }
        else
        {
            sum=b-a;
        }
        sum+=a;
        sum=(sum*4)+19;
        p++;
        printf("Case %d: %d\n",p,sum);

    }

    return 0;
}
