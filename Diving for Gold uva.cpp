#include<bits/stdc++.h>
using namespace std;

int d[40],v[40];
int t,w,n;
int dp[40][11000];
int path[40][11000];

int f(int pos,int sum)
{
    if(pos>=n)return 0;

   // if(dp[sum][pos]!=-1)return dp[pos][sum];
    int p=0,q=0;
    if(sum+(d[pos]*3*w)<=t)
    {
        p=f(pos+1,sum+(d[pos]*3*w))+v[pos];
    }
    q=f(pos+1,sum);
    if(p>q)path[pos][sum]=1;
    else path[pos][sum]=2;

    return max(p,q);
}

vector<int>ans;

int path_print(int pos,int sum)
{
  //  cout<<1<<endl;
    if(path[pos][sum]==-1)return 0;

    if(path[pos][sum]==1)
    {
        ans.push_back(pos);
        return 1+path_print(pos+1,sum+(d[pos]*3*w));
    }
    else return path_print(pos+1,sum);

}

int main()
{
    bool test=0;
    while(scanf("%d %d",&t,&w)==2)
    {
        if(test==1)printf("\n");
        test=1;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&d[i],&v[i]);
        }
        memset(dp,-1,sizeof dp);
        memset(path,-1,sizeof path);
        printf("%d\n",f(0,0));
        printf("%d\n",path_print(0,0));
        for(int i=0;i<ans.size();i++)
        {
        printf("%d %d\n",d[ans[i]],v[ans[i]]);
        }
        ans.clear();
    }
}
