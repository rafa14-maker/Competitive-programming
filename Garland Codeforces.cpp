#include<bits/stdc++.h>
using namespace std;

int n,odd,even;
int arr[105];
int dp[105][2][55][55][55];
//int dp[105];

int f(int pos,int prev,int odd,int even,int counter)
{
   // cout<<pos<<" "<<odd<<" "<<even<<" "<<counter<<endl;
    if(odd<0||even<0)return 1e8;
    if(pos==n)return counter;
    if(dp[pos][prev][even][odd][counter]!=-1)return dp[pos][prev][even][odd][counter];

    int ans=1e9;

    if(pos==0)
    {
        if(arr[pos]==1)ans=min(ans,f(pos+1,1,odd,even,counter));
        else if(arr[pos]==0)ans=min(ans,f(pos+1,0,odd,even,counter));
        else if(arr[pos]==9)ans=min(f(pos+1,0,odd,even-1,counter),f(pos+1,1,odd-1,even,counter));
    }

  else if(arr[pos]==9)
   {
       if(prev==1)
       {
           ans=min(f(pos+1,1,odd-1,even,counter),f(pos+1,0,odd,even-1,counter+1));
       }
       else if(prev==0)
       {
            ans=min(f(pos+1,1,odd-1,even,counter+1),f(pos+1,0,odd,even-1,counter));
       }
   }
   else
   {
       if(prev==1)
       {
           if(arr[pos]==0)ans=min(ans,f(pos+1,0,odd,even,counter+1));
           else ans=min(ans,f(pos+1,1,odd,even,counter));
       }
       else if(prev==0)
       {
            if(arr[pos]==0)ans=min(ans,f(pos+1,0,odd,even,counter));
           else ans=min(ans,f(pos+1,1,odd,even,counter+1));
       }
   }
   return  dp[pos][prev][even][odd][counter]=ans;
}

int main()
{
    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)arr[i]=9;
        else
        {
            arr[i]=arr[i]%2;
            if(arr[i]==0)b++;
            else a++;
        }
    }
    if(n%2==0)
    {
        odd=(n/2)-a;
        even=(n/2)-b;
    }
    else
    {
        odd=(n/2)+1-a;
        even=(n/2)-b;
    }

 // cout<<odd<<" "<<even<<endl;
    memset(dp,-1,sizeof dp);
    cout<<f(0,0,odd,even,0)<<endl;
}
