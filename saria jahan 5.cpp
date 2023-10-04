#include<stdio.h>

int dp[1005][1005][2];
int n,k;
int arr[1005];

int f(int pos,int coi,int us,int sum)
{
    if(sum>k)return 1e8+7;
    if(pos==n)
    {
        if(sum==k)return coi;
        else return 1e8+7;
    }
    int ans= 1e8+7;
    int x = f(pos+1,coi+1,1,sum+arr[pos]);
    int y = f(pos+1,coi,0,sum);
    if(x<=y)ans=x;
    else ans=y;
    return dp[pos][coi][us]=ans;
}

int main(){
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=n;j++)
       {
           for(int k=0;k<2;k++)
           {
               dp[i][j][k] = -1;
           }
       }
   }
   printf("%d\n",f(0,0,0,0));
    return 0;
}
