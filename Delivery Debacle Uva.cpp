#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll dp[50];

void f()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=5;
    for(int i=3;i<=50;i++)
    {
        dp[i] = dp[i-1]+4*dp[i-2]+2*dp[i-3];
    }
}

int main()
{
    f();
    for(int i=1;i<=20;i++)cout<<dp[i]<<endl;
    int n;
     int q;
     f();
     cin>>q;
     while(q--){
            cin>>n;
             cout<<dp[n]<<endl;
     }
}
