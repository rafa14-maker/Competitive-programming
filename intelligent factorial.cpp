#include<bits/stdc++.h>
using namespace std;

bool prime[105];

void seive()
{
    memset(prime,true,105);

    for(int i=2;i*i<=105;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=105;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    seive();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        printf("Case %d: %d = ",i,n);
        int first=0;
           for(int j=2;j<=n;j++)
        {
       if(prime[j]==true)
       {
           int k=j,sum=0;
           while(k<=n)
           {
               sum+=n/k;
               k*=j;
           }
           if(first==0){
           printf("%d (%d)",j,sum);
           first+=1;}
           else
           {
              printf(" * %d (%d)",j,sum);
           }
       }
   }
   printf("\n");
    }
}
