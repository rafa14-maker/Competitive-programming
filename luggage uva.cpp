#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int counter,k;

int dp[25][2005];

int f(int pos,int sum)
{
    if(pos==v.size())
    {
        return abs(sum-abs(k-sum));
    }
    if(dp[pos][sum]!=-1)return dp[pos][sum];

    int ans=99999999;

    ans=min(f(pos+1,sum+v[pos]),f(pos+1,sum));

    return ans;

}

int main()
{
    int q;

    scanf("%d",&q);
    getchar();

    while(q--){
    string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
   // vector<int>v;
    int val;
    counter=0,k=0;
    v.clear();
    while(ss>>val)
    {
        v.push_back(val);
        k+=val;
    }
    memset(dp,-1,sizeof dp);
    if(f(0,0)==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
}
