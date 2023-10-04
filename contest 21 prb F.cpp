#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,c,m,k,n,p=0;
    int arr[2];
    cin>>n;
    while(n--)
    {
    cin>>a>>b>>c;
      m=max(a,b);
      m=max(m,c) ;
      p++;
      if(m==c)
      {
          if(m*m==a*a+b*b)
          {
              printf("Case %d: yes\n",p);
          }
          else
          {
               printf("Case %d: no\n",p);
          }
      }
      else if(m==b)
      {
          if(m*m==a*a+c*c)
          {
              printf("Case %d: yes\n",p);
          }
          else
          {
                printf("Case %d: no\n",p);
          }
      }
      else
      {
         if(m*m==c*c+b*b)
          {
                printf("Case %d: yes\n",p);
          }
          else
          {
              printf("Case %d: no\n",p);
          }
      }
    }
}
