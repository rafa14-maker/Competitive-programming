#include<bits/stdc++.h>
using namespace std;

vector<int>v[40];

int dp[40],n,k;

int flag;

int check(vector<int>a,vector<int>b)
{
    int counter=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
        {
            counter++;
            break;
        }
    }
    return counter;
}



int main()
{
    while(1==1)
    {

        //int n,k;
        scanf("%d %d",&n,&k);

        int frr[n+5]={0};
        for(int i=1;i<=n;i++)frr[i]=i;

        memset(v,0,sizeof v);
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int a;
                scanf("%d",&a);
                v[i].push_back(a);
            }
            sort(v[i].begin(),v[i].end());
        }

       memset(dp,0,sizeof dp);

       int sum=0;

      for(int i=1;i<=n;i++)
       {
         //  int flag=1;
          for(int j=1;j<=n;j++)
          {
             if(check(v[i],v[j])==0)
             {
                 dp[j]++;
                 sum=max(sum,dp[j]);
             }
          }
         // if(dp[i]==-1)dp[i]=0;
       }

       for(int i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<endl;

      /* printf("%d\n",sum+1);

       vector<int>po;

       for(int i=n;i>=1;i--)
       {
           if(dp[i]==sum)
           {
             po.push_back(frr[i]);
             sum--;
           }
       }
      for(int i=po.size()-1;i>=0;i--)printf("%d ",po[i]);
       printf("\n");*/
    }
}


