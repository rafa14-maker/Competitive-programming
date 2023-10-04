#include<bits/stdc++.h>
using namespace std;

int dp[10005][10005];

int n,cap;

vector<int>v;

string s1="";

int flag=0;
/*
void f(int pos,int l,int r,string s)
{
 // cout<<pos<<" "<<" "<<s<<" "<<l<<" "<<r<<endl;
     if(l<0||r<0)return ;
  if(pos>=v.size())
  {
      flag=max(pos-1,flag);
      if(l>0&&r>0&&s.size()>s1.size())s1=s;
      return ;
  }
  flag=max(flag,pos);
   if(l>=0&&r>=0&&s.size()>s1.size())s1=s;
  f(pos+1,l-v[pos],r,s+'l');
  f(pos+1,l,r-v[pos],s+'r');
}
*/


int f(int pos,int l,int r,string s)
{
 // cout<<pos<<" "<<" "<<s<<" "<<l<<" "<<r<<endl;
     if(l<0||r<0)return pos-1;
  if(pos>=v.size())
  {
      if(l>=0&&r>=0&&s.size()>s1.size())s1=s;
      return pos;
  }
 if(dp[l][r]!=-1)return dp[l][r];
 // flag=max(flag,pos);
   if(l>=0&&r>=0&&s.size()>s1.size())s1=s;
   int ans=0;
 ans=max(f(pos+1,l-v[pos],r,s+'l'),f(pos+1,l,r-v[pos],s+'r'));
    if(l>=0&&r>=0&&s.size()>s1.size())s1=s;
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
         printf("%d\n",f(0,cap,cap,s1));
       //cout<<f(0,cap,cap,s1)<<endl;
       // f(0,cap,cap,s1);cout<<flag<<endl;
         for(int i=0;i<s1.size();i++)
         {
             if(s1[i]=='l')printf("port\n");
             else printf("starboard\n");
         }
          if (q) {
      puts("");}
     }
}
/*
1
50
2500
3000
1000
1000
1500
700
800
0
*/
