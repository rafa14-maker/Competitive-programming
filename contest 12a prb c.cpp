#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;

        if(a==1||b==1)
        {
          printf("Case %d: %d\n",i,a*b);
        }
        else if(a==2||b==2)
        {
          if(a==2)
          {
              k=b;
          }
          else
          {
              k=a;
          }
         if(k%4==1)
          {
              k+=1;
          }
          else if(k%4==2)
          {
              k+=2;
          }
          else if(k%4==3)
          {
              k+=1;
          }


           printf("Case %d: %d\n",i,k);
        }
       else if((a*b)%2==0)
        {
           printf("Case %d: %d\n",i,(a*b)/2);
        }
        else
        {
           printf("Case %d: %d\n",i,((a*b)+1)/2);
        }
    }
}
