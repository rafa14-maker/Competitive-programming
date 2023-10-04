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

int f(int pos)
{
    if(dp[pos]!=-1)return dp[pos];

    int ans=0;

    for(int i=1;i<=n;i++)
    {
        if(check(v[i],v[pos])==0&&i!=pos)
        {
            ans=max(ans,f(i)+1);
        }
    }

    return dp[pos]=ans;
}

int main()
{
    while(1==1)
    {
        //int n,k;
        scanf("%d %d",&n,&k);
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

        memset(dp,-1,sizeof dp);
   flag=0;
     for(int i=1;i<=n;i++)
     {
        flag=max(flag,f(i));
     }

     printf("%d\n",flag+1);

     for(int i=0;i<=flag;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(i==dp[j])
             {
                 cout<<j<<" ";
                 break;
             }
         }

     }
     cout<<endl;

 // for(int i=1;i<=20;i++)cout<<dp[i]<<" ";
  // cout<<endl;
  //kop(0,pl);
 // cout<<endl<<endl<<endl;
      // cout<<check(v[6],v[2])<<endl;
    }
}

