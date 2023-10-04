#include<bits/stdc++.h>
using namespace std;

int arr[]={5,10,20,50,100,200,500,1000,2000,5000,10000};

#define N 30002

long long dp[N];

int main()
{
   // int n;
   // cin>>n;
    //memset(dp,0,sizeof dp);
    dp[0] = 1;
    for(int i = 0; i < 11; i++){
        for(int j = arr[i]; j < N;j++)
            dp[j] += dp[j - arr[i]];
    }

  // cout<<dp[n]<<endl;

  double input;
  while(1)
  {
      scanf("%lf",&input);
      if(input==0.0)break;
       unsigned k= (unsigned)((input + 0.001) * 100);
      printf("%6.2f%17lld\n",input,dp[k]);
  }

}
