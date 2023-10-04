#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
  stack<char>s;
  int counter=0;

  for(int i=0;i<n;i++)
  {
      char c;
      cin>>c;
      if(c=='(')
      {
          s.push(c);
      }
      else
      {
          if(s.empty())counter++;
          else s.pop();
      }
  }
  cout<<counter<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

   // solve();
}

