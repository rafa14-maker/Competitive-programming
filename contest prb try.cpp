#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l,o,p,a;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p;
        if((p==1||p==0)||p<0)
        {
           printf("Case %d: -1\n",i+1);
           continue;
        }
        a=p;
        l=0;
        if(p<10)
        {
            do
            {
                p-=5;
                if(p%3==0&&p>0)
                {
                    l=p;
                }
            }while(p>0);
        }
        else
        {
           o=p/2;
           do
           {
               p-=5;
               if(p%3==0&&p>o)
               {
                   l=p;
               }
           }while(p>o);
        }
        if(l==0)
        {
             if((a/2)%5==0&&(a/2)%3==0)
             {
                 printf("Case %d: %d\n",i+1,a/2);
             }
             else
             {
                printf("Case %d: -1\n",i+1);
             }
        }
        else
        {
          printf("Case %d: %d\n",i+1,l);
        }
    }

    return 0;
}
