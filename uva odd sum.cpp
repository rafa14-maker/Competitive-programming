#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,c=1;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2==1)sum+=i;
        }
        printf("Case %d: %d\n",c,sum);
        c++;
    }

}
