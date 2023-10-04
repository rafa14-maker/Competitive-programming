#include<bits/stdc++.h>
using namespace std;

int arr[20][3];

int dp[20][20];

int n,counter=1e8;

void f(int pos,int k,int sum)
{
    if(pos==n)
    {
        counter=min(counter,sum);
        return ;
    }
   sum+=arr[pos][k];
   if(k==0)
   {
       f(pos+1,1,sum);
       f(pos+1,2,sum);
   }
   else if(k==1)
   {
       f(pos+1,0,sum);
       f(pos+1,2,sum);
   }
   else if(k==2)
   {
       f(pos+1,1,sum);
       f(pos+1,0,sum);
   }
}

int main()
{
    int q;
    cin>>q;
    for(int k=1;k<=q;k++){
    cin>>n;
    memset(dp,-1,sizeof(dp));
    counter=1e8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    f(0,1,0);
    f(0,0,0);
    f(0,2,0);

    printf("Case %d: %d\n",k,counter);
    }

}
