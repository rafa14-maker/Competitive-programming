#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
char arr[55][55];
int test;
vector<pair<int,int> >v;
int n,step;

int dp[2505][55];

bool check()
{
      for(int i=0;i<n;i++)
    {
        bool tr=true;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='O'||arr[i][j]=='.')tr=false;
        }
       if(tr)return true;
    }
     for(int j=0;j<n;j++)
    {
        bool tr=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]=='O'||arr[i][j]=='.')tr=false;
        }
        if(tr)return true;
    }
    return false;
}
int f(int pos,int cnt)
{
    //cout<<pos<<" "<<cnt<<endl;
    if(pos==v.size())
    {
        if(check())return 1;
        else return 0;
    }
    int i = v[pos].first;
    int j = v[pos].second;
  //  if(dp[pos][cnt]!=-1)return dp[pos][cnt];
    int ans=0;
    if(cnt>0){
       arr[i][j]='X';
       ans+= f(pos+1,cnt-1);
      arr[i][j]='.';
    }
   ans+= f(pos+1,cnt);
   return dp[pos][cnt]=ans;
}

void solve()
{
    v.clear();
    memset(dp,-1,sizeof dp);
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='.')
            {
                v.push_back(make_pair(i,j));
            }
        }
    }
    step=N;
    for(int i=0;i<n;i++)
    {
        bool tr=true;
        int k=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='O')tr=false;
            else if(arr[i][j]=='.')k++;
        }
        if(tr)step=min(step,k);
    }
     for(int j=0;j<n;j++)
    {
        bool tr=true;
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]=='O')tr=false;
            else if(arr[i][j]=='.')k++;
        }
        if(tr)step=min(step,k);
    }
    if(step==N)
    {
        printf("Case #%d: Impossible\n",++test);
        return ;
    }

    int idx = f(0,step);
    cout<<step<<" "<<idx<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*
1
3
...
...
...

*/

