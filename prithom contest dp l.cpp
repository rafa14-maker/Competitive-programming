#include<bits/stdc++.h>
using namespace std;

const int N =1e3+5;
int arr[N][N];
int dp[N][N];
int n,k;

void solve(int idx,int &a,int &b)
{
    while(idx%2==0&&idx>0)
    {
        a++;
        idx/=2;
    }
    while(idx%5==0&&idx>0)
    {
        b++;
        idx/=5;
    }
}

int f(int i,int j,int one,int two)
{
    //cout<<i<<" "<<j<<" "<<n<<" "<<one<<" "<<two<<endl;
    if(i>n)return 1e7;
    if(j>n)return 1e7;
    if(i==n&&j==n)
    {
           int a=0,b=0;
       solve(arr[i][j],a,b);
       if(dp[i][j]==-1)return dp[i][j]=min(one+a,two+b);
       return min(dp[i][j],min(one+a,two+b));
    }

    //if(dp[i][j]!=-1)return dp[i][j];

    int a=0,b=0;
    solve(arr[i][j],a,b);

    int ans=1e7;
    ans=min(ans,f(i+1,j,one+a,two+b));
    ans=min(ans,f(i,j+1,one+a,two+b));

    return dp[i][j]=ans;
}
void path(int i,int j,int one,int two)
{
   if(i>n)return ;
   if(j>n)return ;

       int a=0,b=0;
       solve(arr[i][j],a,b);

   if(f(i+1,j,one+a,two+b)==k)
   {
       cout<<"D";
       path(i+1,j,one+a,two+b);
   }
   else if(f(i,j+1,one+a,two+b)==k)
   {
        cout<<"R";
       path(i,j+1,one+a,two+b);
   }
}


int main()
{
 //  int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)cin>>arr[i][j];
   }
   memset(dp,-1,sizeof dp);

    k=f(1,1,0,0);
    cout<<k<<endl;
     path(1,1,0,0);
}
