#include<bits/stdc++.h>
using namespace std;

map<string,bool>mp;
int n;
char m;
bool kp;

void f(string s)
{
    if(kp)return ;
   int len=s.size();
   string frr;
   for(int i=len-1;i>=len-n+1;i--)
   {
       frr+=s[i];
   }
   reverse(frr.begin(),frr.end());
   bool tr=true;
  // cout<<frr<<endl;
   int kc=frr.size()-1;

   for(char c='0';c<m;c++)
   {
       string krr=frr;
       krr+=c;
       if(!mp[krr]&&(frr[0]==s[len-n]))
       {
           tr=false;
          mp[krr]=1;
          f(s+c);
       }
   }
   if(tr)
   {
       cout<<s<<endl;
       kp=true;
   }
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        mp.clear();
        cin>>m;
        string frr;
        for(int i=0;i<n;i++)frr+='0';
        mp[frr]=1;
        kp=false;
        f(frr);
    }
}
