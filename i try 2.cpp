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
          j-=5;
          if(j%3==0&&j!=0&&j>k)
          {
              l=j;
          }
        }

        if(l==0&&p%k==0)
        {
               printf("Case %d: %d\n",i+1,k);
            }
            else if(l==0)
            {
                printf("Case %d: -1\n",i+1);
            }
            else
            {
                  printf("Case %d: %d\n",i+1,l);
            }
        }

    }


