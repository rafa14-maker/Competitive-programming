#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;

int dp[N][11];
int digit_frequency[N][11];

void f()
{
     dp[0][1]++;
    dp[1][1]++;

    string fac;
    fac.push_back('1');

    for(int carry=0,j=0,i=2;i<N;i++,carry=0)
    {
        for(j=0;fac[j]!=0;j++)
        {
            carry+=(fac[j]-48)*i;

            fac[j] = (carry>9) ? (carry%10+48) : (carry+48);

            (carry>9) ? carry/=10 : carry=0;

            dp[i][fac[j]-48]++;
        }
        while(carry)
        {

            (carry>9) ? fac.push_back(carry%10+48) : fac.push_back(carry+48);
            (carry>9) ? carry/=10 : carry=0;

            dp[i][fac[j]-48]++;
            j++;
        }
        /*for(int a=0;factorial[a]!=0;a++)
            digit_frequency[i][factorial[a]-48]++;*/
    }
}


int main()
{
    f();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        long long sum=0;
        for(int i=1;i<=9;i++)
        {
         //   cout<<dp[n][i]<<" ";
          sum += i*dp[n][i];
        }//cout<<endl;
    cout<<sum<<"\n";
    }
}
