#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
ll n,x;
  cin>>n>>x;
  string s;
  cin>>s;

   string frr;

  stack<char>st;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='U')
       {
           if(st.size()>0)st.pop();
           else
           {
               if(x>1)x = x/2;
           }
       }
       else st.push(s[i]);
   }

   while(!st.empty())
   {
       char f = st.top();
       st.pop();
       frr+=f;
   }

   for(int i=frr.size()-1;i>=0;i--)
   {
       if(frr[i]=='R')x = x*2+1;
       else x = x*2;
   }
cout << x << endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

