#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int ls[N],rs[N];

int l,r,s,b;

int main()
{
    while(1)
    {
        scanf("%d %d",&s,&b);
        if(s==0&&b==0)break;
        for(int i=1;i<s+1;i++)
        {
            ls[i]=i-1;
            rs[i]=i+1;
        }
        for(int i=0;i<b;i++)
        {
            cin>>l>>r;

            if(ls[l]<1)printf("* ");
            else printf("%d ",ls[l]);

             if(rs[r]>s)printf("*\n");
            else printf("%d\n",rs[r]);

            ls[rs[r]]=ls[l];
            rs[ls[l]]=rs[r];
        }
        printf("-\n");
    }
}
