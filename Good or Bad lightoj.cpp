#include<bits/stdc++.h>
using namespace std;

int dp[55][10][10][2];
bool tr,fr,kr;
string str;
int arr[55],test,n;


int f(int pos,int one,int zero,int cnt)
{

    if(one==5||zero==3)tr=true,cnt=1;

    if(pos==n)
    {
        if(cnt==0)fr=true;
        return 0;
    }

   // if(zero==3)fr=true;

   if(dp[pos][one][zero][cnt]!=-1)return dp[pos][one][zero][cnt];

    int ans=0;

    if(arr[pos]!=9)
    {
        if(arr[pos]==1)ans=f(pos+1,one+1,0,cnt);
        else ans=f(pos+1,0,zero+1,cnt);
    }
    else
    {
        ans=f(pos+1,one+1,0,cnt);
        ans=f(pos+1,0,zero+1,cnt);
    }

    return dp[pos][one][zero][cnt]=ans;
}

void solve()
{
    cin>>str;
    memset(dp,-1,sizeof dp);
    n=str.size();
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='?')arr[i]=9;
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            arr[i]=0;
        }
        else arr[i]=1;
    }
    tr=false;
    fr=false;
    f(0,0,0,0);
    printf("Case %d: ",++test);
    if(tr&&fr)cout<<"MIXED"<<endl;
    else if(fr)cout<<"GOOD"<<endl;
    else if(tr)cout<<"BAD"<<endl;
  //  else cout<<"BAD"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
??N?KAR?O

*/
