#include<bits/stdc++.h>
using namespace std;

long long nCr[75][75];

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;

    long long sum=n+m;

 for(int i = 0; i <= sum; i++)
		nCr[i][0] = nCr[i][i] = 1;

	for(int i = 1; i <= sum; i++)
		for(int j = 1; j <= i; j++)
			nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j];

  long long res=0;

  for(int i=4;i<=n&&i<=k-1;i++)
  {
      if(m>=k-i)
      {
          res+=nCr[n][i]*nCr[m][k-i];
      }
  }
  cout<<res<<endl;
}
