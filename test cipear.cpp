#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int counter=0;
        if(c==0)
        {
            counter=1;
        }
      else if(a>b)
       {
           if(a-b>c)
           {
               counter=(c+1);
           }
           else
           {
                for(int i=c,j=0;i<=c;i--,j++)
        {
            if(a+i>j+b)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
           }
       }
       else if(a==b)
       {
            for(int i=c,j=0;i<=c;i--,j++)
        {
            if(a+i>j+b)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
       }
       else
       {
        for(int i=c,j=0;i<=c;i--,j++)
        {
            if(a+i>j+b)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
       }
        printf("%d\n",counter);
    }
}

