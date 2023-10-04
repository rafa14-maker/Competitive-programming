#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
    while(scanf("%d",&n))
    {
      //  int n;
       if(n==0)return 0;
        int sum=0,m=0,a;
        while(n--)
        {
           scanf("%d",&a);
           sum+=a;
           if(sum<0)sum=0;
           m=max(sum,m);
        }
        if(m==0)printf("Losing streak.\n");
        else printf("The maximum winning streak is %d.\n",m);
    }
}
