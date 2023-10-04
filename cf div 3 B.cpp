#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;

   string s;
   cin>>s;

   if(s=="2020")
   {
       cout<<"YES"<<endl;
       return ;
   }

  if(s[0]=='2'&&s[1]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0')
  {
       cout<<"YES"<<endl;
       return ;
  }

  if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0')
  {
       cout<<"YES"<<endl;
       return ;
  }

  if(s[s.size()-4]=='2'&&s[s.size()-3]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0')
  {
       cout<<"YES"<<endl;
       return ;
  }

  if(s[0]=='2'&&s[s.size()-3]=='0'&&s[s.size()-2]=='2'&&s[s.size()-1]=='0')
  {
       cout<<"YES"<<endl;
       return ;
  }

   if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[s.size()-1]=='0')
  {
       cout<<"YES"<<endl;
       return ;
  }

cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

