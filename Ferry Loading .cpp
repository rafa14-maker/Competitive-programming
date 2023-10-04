#include<bits/stdc++.h>
using namespace std;

int dp[10005][10005];

int n,cap;

vector<int>v;

string s1="";


int f(int pos,int l,int r,int counter,string s)
{
 //   cout<<pos<<" "<<counter<<" "<<s<<endl;
    if(pos>=v.size())
    {
        if(s.size()>s1.size())s1=s;
      //  s1=s;
        return counter;
    }
    if(dp[l][r]!=-1)return dp[l][r];
    int ans=0;
    if(l-v[pos]>=0&&r-v[pos]>=0)
    {
        ans=max(f(pos+1,l-v[pos],r,counter+1,s+'l'),f(pos+1,l,r-v[pos],counter+1,s+'r'));
    }
    else if(l-v[pos]>=0)
    {
      ans=  f(pos+1,l-v[pos],r,counter+1,s+'l');
    }
        else if(r-v[pos]>=0)
        {
           ans= f(pos+1,l,r-v[pos],counter+1,s+'r');
        }
        else
        {
            ans=counter;
            if(s.size()>s1.size())s1=s;
        }
        return dp[l][r]=ans;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        scanf("%d",&cap);
        cap*=100;
         v.clear();
         while(1)
         {
             int a;
             scanf("%d",&a);
             if(a==0)break;
             v.push_back(a);
         }
          s1="";
         memset(dp,-1,sizeof dp);
         printf("%d\n",f(0,cap,cap,0,s1));
         for(int i=0;i<s1.size();i++)
         {
             if(s1[i]=='l')printf("port\n");
             else printf("starboard\n");
         }
         cout<<endl;
     }
}
