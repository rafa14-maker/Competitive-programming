#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string krr;
int l,r;
int x;

ll dp[35][99][3];

string con(int k)
{
    string s;
    while(k>0)
    {
        int r = k%10;
        k/=10;
        char c = (char)('0'+r);
        s+=c;
    }
    reverse(s.begin(),s.end());
    return s;
}

int f(int pos,int sum,int isSmall)
{
  //  cout << pos<<" "<<sum<<" "<<isSmall<<" "<<krr[pos]<<endl;
    if(pos == krr.size())return (sum==x);

    if(dp[pos][sum][isSmall] != -1)return dp[pos][sum][isSmall];

    int low = 0;
    int hi = krr[pos]-'0';
    if(isSmall)hi = 9;
    int ans = 0;
    for(int i=low;i<=hi;i++)
    {
        ans += f(pos+1,sum+i,isSmall|(i<hi));
    }

    return dp[pos][sum][isSmall] = ans;
}

void solve()
{
  //  cout<<"yes"<<endl;

  cin>>l>>r;
  cin>>x;
 // cout << con(x) << endl;
  memset(dp,-1,sizeof dp);

 krr = con(r);

 //cout << krr << endl;

  int rmx = f(0,0,0);

  memset(dp,-1,sizeof dp);

  krr = con(l-1);

  int lmx = f(0,0,0);

  cout << rmx <<" "<< lmx<<endl;

  cout<< rmx - lmx << endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}

