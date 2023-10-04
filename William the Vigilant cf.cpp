#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;

 map<int,int>mp;

     int cnt =0;

     for(int i=0;i<s.size();i++)
     {
         if(i+2<s.size()&&s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
         {
             mp[i]=1;
             mp[i+2]=1;
             mp[i+3]=1;
             cnt++;
         }
     }


 while(m--)
 {
     int idx;
     cin>>idx;
     idx --;

     char c;
     cin>>c;

     if(s[idx] != c)
     {
         if(c=='a')
         {
             if(idx+2<s.size()&&s[idx+1]=='b'&&s[idx+2]=='c')cnt++;
         }
         else if(c=='b')
         {
             if(idx-1>=0&&idx+1<s.size()&&s[idx-1]=='a'&&s[idx+1]=='c')cnt++;
         }
         else if(c=='c')
         {
             if(idx-2>=0&&s[idx-1]=='b'&&s[idx-2]=='a')cnt++;
         }

         if(s[idx]=='a')
         {
              if(idx+2<s.size()&&s[idx+1]=='b'&&s[idx+2]=='c')cnt--;
         }
         else if(s[idx]=='b')
         {
              if(idx+1<s.size()&&idx-1>=0&&s[idx-1]=='a'&&s[idx+1]=='c')cnt--;
         }
        else  if(s[idx]=='c')
         {
              if(idx-2>=0&&s[idx-2]=='a'&&s[idx-1]=='b')cnt--;
         }

         s[idx] = c;
     }

     cout << cnt << endl;
 }



}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

