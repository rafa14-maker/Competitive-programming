#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   string s;
   cin>>s;

   if(n==1)
   {
       cout<<s<<s<<endl;
       return ;
   }

 if(s[0]<=s[1])
 {
     cout<<s[0]<<s[0]<<endl;
 }
 else
 {
     int idx = 0;

     while(idx+1<s.size()&&s[idx+1]<=s[idx])
     {
         idx++;
     }
     string frr;
     for(int i=0;i<=idx;i++)frr+=s[i];
     for(int i=idx;i>=0;i--)frr+=s[i];
     cout<<frr<<endl;
 }



}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

