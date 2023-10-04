#include<bits/stdc++.h>
using namespace std;

int n,x,t,k,m;
double arr[105],frr[105];

double dp[105][1200][25];

double f(int pos,int sum,int counter)
{
   // cout<<sum<<" "<<counter<<endl;
   if(sum>m||counter>2*(n+1))return -100000000;

  if(dp[pos][sum][counter]!=-1)return dp[pos][sum][counter];

  if(pos==k||counter==2*(n+1))return 0.0;

 // cout<<0<<endl;

  double ans=max(f(pos+1,sum,counter),f(pos+1,sum+arr[pos],counter+1)+frr[pos]);
  ans=max(ans,f(pos+1,sum+(arr[pos]*2),counter+2)+frr[pos]*2);

// double value = max(f(pos+1,sum,counter), f(pos+1,sum+arr[pos],counter+1) + frr[pos]);
 //   value = max(value, f(pos+1,sum+arr[pos]*2,counter+2) + frr[pos]*2);

  return dp[pos][sum][counter]=ans;
}

int main()
{
    while(scanf("%d %d %d %d",&n,&x,&t,&k))
    {
        if(n==0&&x==0&&t==0&&k==0)break;
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
            int p=0,a;
            for(int j=0;j<n+1;j++)
            {
                cin>>a;
                p+=a;
            }
            frr[i]=(double)p/(n+1);
        }
      //  for(int i=0;i<k;i++)cout<<frr[i]<<" ";cout<<endl;
       // m=floor(double(x*(n+1))/1*1+1e-6);
         m = floor(double(x * (n + 1)) / 1.1 + 1e-6);
      //  cout<<m<<endl;
       // memset(dp,-1,sizeof dp);
       for(int i=0;i<105;i++)
       {
           for(int j=0;j<1200;j++)
           {
               for(int k=0;k<25;k++)
               {
                   dp[i][j][k]=-1;
               }
           }
       }
        double ans=f(0,t*(n+1),0);
        printf("%0.2lf\n",(ans<0)?0.0:ans);
    }
}
