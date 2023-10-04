#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,j,k,l,p;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>j;
        p=j;
        k=j/2;
        l=0;
          while(j>k)
        {
          if(k<9)
          {
               j-=5;
            if(j%3==0&&j!=0)
            {
              l=j;
            }
          }
          else
          {
                j-=5;
            if(j%3==0&&j>k&&j!=0)
            {
              l=j;
            }
          }

        }

        if(l==0&&p%k==0)
        {
               printf("Case %d: %d\n",i+1,k);
            }
            else
            {
                printf("Case %d: -1\n",i+1);
            }
        }

    }
