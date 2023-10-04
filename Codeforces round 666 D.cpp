#include<bits/stdc++.h>
using namespace std;

int arr[150],n;

int dp[150][150][2][2][2][2];

int  f(int pre,int turn,int arr[150],int cnt,int cnt2,int idx1,int idx2)
{

    if(dp[pre][turn][cnt][cnt2][idx1][idx2]!=-1)return dp[pre][turn][cnt][cnt2][idx1][idx2];

    bool kp=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0&&pre!=i)
        {
            arr[i]--;
           if(turn%2==0) f(i,turn+1,arr,cnt,cnt2,idx1+1,idx2);
           else f(i,turn+1,arr,cnt,cnt2,idx1,idx2+1);
            arr[i]++;
            kp=false;
        }
    }
    if(kp){
    if(turn%2==0)
    {
        idx2++;
    }
    else idx1++;
    }

    if(idx1>idx2)return dp[pre][turn][cnt][cnt2][idx1][idx2]=cnt;
    else return dp[pre][turn][cnt][cnt2][idx1][idx2]=cnt2;
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr,arr+n);

  memset(dp,-1,sizeof dp);
   if(f(0,0,arr,1,2,0,0)==2)cout<<"T"<<endl;
   else cout<<"HL"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  //  solve();
}
