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

void p(int sum,vector<int>pl,int siz,int pre)
{
    if(sum>=siz+1)
    {
        for(int i=0;i<pl.size();i++)printf("%d ",pl[i]);
        printf("\n");
       // return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(sum!=0&&dp[i]==sum&&check(v[pre],v[i])==0)
        {
            vector<int>r;
            r=pl;
            r.push_back(i);
            pre=i;
            p(sum+1,r,siz,pre);
            continue;
          //  p(sum,pl,siz);
        }
        if(sum==0&&dp[i]==sum)
        {
              vector<int>r;
            r=pl;
            r.push_back(i);
            pre=i;
            p(sum+1,r,siz,pre);
            continue;

        }
      //  p(sum,pl,siz);
    }
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
  vector<int>pl;
   p(0,pl,flag,0);
 // for(int i=1;i<=20;i++)cout<<dp[i]<<" ";
  // cout<<endl;
  //kop(0,pl);
 // cout<<endl<<endl<<endl;
      // cout<<check(v[6],v[2])<<endl;
    }
}
