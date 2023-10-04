#include<bits/stdc++.h>
using namespace std;

int arr[50],n,flag,counter=0;

int dp[50];


int f(int pos,int len)
{
    if(dp[pos]!=-1)return dp[pos];

    int ans=0;

   for(int i=0;i<n;i++)
   {
       if(arr[i]>=arr[pos]&&i!=pos)
       {
          ans=max(ans ,f(i,len+1)+1);
       }
   }
   return dp[pos]=ans;
}

void p(int len,vector<int>pl)
{
    if(pl.size()==counter+1)
    {
        for(int i=0;i<pl.size();i++)cout<<pl[i]<<" ";
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(dp[i]==len)
        {
            vector<int>kr;
            kr=pl;
            kr.push_back(arr[i]);
            p(len+1,kr);
        }
    }
}

int main()
{
   // int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    memset(dp,-1,sizeof dp);
   // int counter=0;
    for(int i=0;i<n;i++)
    {
        int k=f(i,0);
        cout<<arr[i]<<" "<<k<<endl;
       counter=max(counter,k);
    }
    cout<<counter<<endl;
    vector<int>pl;
    p(0,pl);
}
/*

void p(int sum,vector<int>pl)
{
   if(sum==flag)
   {
       for(int i=0;i<pl.size();i++)
       {
           cout<<pl[i]<<" ";
           return ;
       }
   }

   if(sum==0)
   {
       for(int i=1;i<=n;i++)
       {
           if(dp[i]==sum)
           {
               vector<int>r;
               r=pl;
               r.push_back(i);
               p(sum+1,r);
           }

       }
   }

   else
   {
       int ko=pl.size()-1;
       for(int i=1;i<=n;i++)
       {
           if(dp[i]==sum&&check(v[ko],v[i]))
           {
               vector<int>r;
               r=pl;
               r.push_back(i);
               p(sum+1,r);
           }
       }
   }

}*/
