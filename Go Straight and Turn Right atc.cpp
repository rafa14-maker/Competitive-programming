#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n;
  cin>>n;
  string s;
  cin>>s;

  int a=0,b=0;
  char c = 'E';

  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='R')
      {
          if(c=='E')c = 'S';
         else if(c=='S')c = 'W';
         else if(c=='W')c = 'N';
         else if(c=='N')c = 'E';
      }
      else if(s[i]=='S')
      {
          if(c=='S')b--;
          if(c=='N')b++;
          if(c=='E')a++;
          if(c=='W')a--;
      }
  }

  cout <<a<<" "<<b<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

