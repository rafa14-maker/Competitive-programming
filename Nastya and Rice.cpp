#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
   scanf("%d",&q);
    while(q--)
    {
        int n,a,b,c,d;
      scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        bool  cr=false;
        int l=(a-b)*n;
        int r=(a+b)*n;

       if(l<=(c+d)&&r>=(c-d))cr=true;
        if(cr)printf("Yes\n");
        else printf("No\n");
    }
}
