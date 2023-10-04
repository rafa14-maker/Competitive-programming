#include<bits/stdc++.h>
using namespace std;
#define r1 1130

int n,k;
long long dp[200][1500][20];

bool prime[r1];
vector<int>arr;

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    arr.push_back(2);

    for(int i=3;i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            arr.push_back(i);
        }
    }

}

long long f(int pos,int sum,int counter)
{
    if(pos>=arr.size())return 0;
    if(counter>k)return 0;
    if(sum==n&&counter==k)return 1;
    if(sum>n)return 0;

    if(dp[pos][sum][counter]!=-1)return dp[pos][sum][counter];

    int ans=0;

    ans+=f(pos+1,sum+arr[pos],counter+1);
    ans+=f(pos+1,sum,counter);

    return dp[pos][sum][counter]=ans;
}


int main()
{
    seive();
    while(1)
    {
        cin>>n>>k;
        if(n==0&&k==0)return 0;
        memset(dp,-1,sizeof dp);
        cout<<f(0,0,0)<<endl;
    }
}

