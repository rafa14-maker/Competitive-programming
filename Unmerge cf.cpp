#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int n;

int dp[2005][2005];

int f(int pos,int left,int right)
{
    //cout<<pos<<" "<<left<<" "<<right<<endl;
    if(pos==v.size())
    {
        if(left==right&&right==n)return 1;
        else return 0;
    }

    if(left>n||right>n)return 0;

    if(dp[left][right]!=-1)return dp[left][right];
    int ans=0;
    ans = max(ans,f(pos+1,left+v[pos],right));
    ans = max(ans,f(pos+1,left,right+v[pos]));

    return dp[left][right]=ans;
}

void solve()
{
    v.clear();
  //  int n;
    cin>>n;
    int k=2*n;
    int arr[k+5];
    for(int i=0;i<k;i++)cin>>arr[i];
    int idx=k,px=0;



    while(1)
    {
        px=0;
        int pk=0;
        for(int i=0;i<idx;i++)
        {
            if(arr[i]>px)
            {
                pk=i;
                px=arr[i];
            }
        }
        v.push_back(idx-pk);
        idx = pk;
        if(idx==0&&pk==0)break;
    }

    memset(dp,-1,sizeof dp);

  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    if(f(0,0,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
4
6 1 3 7 4 5 8 2

*/
