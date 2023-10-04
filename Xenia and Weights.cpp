#include<bits/stdc++.h>
using namespace std;

int dp[5005][5005];
int n;
vector<int>v;


int f(int left,int right,int counter,int prev)
{
  //  cout<<left<<" "<<right<<endl;
    if(counter==0)return 1;
    if(counter<0)return 0;

    if(dp[left][right]!=-1)return dp[left][right];

   int  ans=0;

   if(left<=right)
   {
       for(int i=0;i<v.size();i++)
       {
           if(v[i]!=prev&&right<v[i]+left)
           {
               ans=max(ans,f(left+v[i],right,counter-1,v[i]));
           }
       }
   }
   else
   {
      for(int i=0;i<v.size();i++)
       {
           if(v[i]!=prev&&right+v[i]>left)
           {
               ans=max(ans,f(left,right+v[i],counter-1,v[i]));
           }
       }
   }
   return dp[left][right]=ans;
}

void path_print(int left,int right,int counter,int prev)
{
    if(left<=right)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=prev&&v[i]+left>right&&f(left+v[i],right,counter-1,v[i]))
            {
                cout<<v[i]<<" ";
                path_print(left+v[i],right,counter-1,v[i]);
                return;
            }
        }
    }
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=prev&&v[i]+right>left&&f(left,right+v[i],counter-1,v[i]))
            {
                cout<<v[i]<<" ";
                path_print(left,right+v[i],counter-1,v[i]);
                return;
            }
        }
    }
}


int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')v.push_back(i+1);
    }
    int step;
    cin>>step;
    memset(dp,-1,sizeof dp);
    if(f(0,0,step,0))
    {
        cout<<"YES"<<endl;
        path_print(0,0,step,0);
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
