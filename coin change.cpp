#include<bits/stdc++.h>
using namespace std;

const int N = 7500;

long long dp[N];

int arr[]={1,5,10,25,50};

int main()
{
    dp[0]=1;
    for(int i=0;i<5;i++)
    {
      //  cout<<1<<endl;
        for(int j=arr[i];j<=N;j++)
        {
            dp[j]+=dp[j-arr[i]];
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",dp[n]);
    }
}
