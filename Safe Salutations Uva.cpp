#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll dp[55][55];
int cat[50];

/*
void f()
{
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2;i<=30;i++)
    {
        for(int j=0;j<=30;j++)
        {
            if(j==0)dp[i][j] = 1;
            else if(j==i)dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }
}
*/

void f()
{
    cat[0]=1;
    cat[1]=1;
    for(int i=2;i<=10;i++)
    {
        for(int j=0;j<i;j++)
        {
            cat[i]+=cat[j]*cat[i-j-1];
        }
    }
}

int main()
{
    f();
  int n;
  bool tr=false;
 while(scanf("%d",&n)==1){
   if(tr)puts("");
   tr=true;
   printf("%d\n",cat[n]);
 }
}
