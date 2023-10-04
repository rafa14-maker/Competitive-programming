#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,i,j,k,l,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

          scanf("%d %d %d %d",&a,&b,&c,&d);
         scanf("%d",&j);
         printf("Case %d:\n",i);
        for(k=0;k<j;k++)
        {
              scanf("%d %d",&l,&m);
            if(l>=a&&l<=c&&m>=b&&m<=d)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
