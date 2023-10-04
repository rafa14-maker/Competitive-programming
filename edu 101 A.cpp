#include<bits/stdc++.h>
using namespace std;

void solve()
{
 string s;
 cin>>s;
 queue<char>pq;
 bool tr=true;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]=='('||s[i]=='?')pq.push(s[i]);
     else
     {
         if(pq.empty())
         {
             tr=false;
             break;
         }
         pq.pop();
     }
 }

 if(!tr)
 {
     cout<<"NO"<<endl;
     return ;
 }
 int cnt=0;
 while(!pq.empty())
 {
     char f=pq.front();
     if(f=='?')
     {
         cnt++;
     }
     else
     {
         if(cnt>0)cnt--;
         else tr=false;
     }
     pq.pop();
 }

 if(tr&&cnt%2==0) cout<<"YES"<<endl;
 else  cout<<"NO"<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
}
