#include<bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin>>q;
  while(q--)
  {
      long long e,b;
      cin>>e>>b;
      if(b%e==0)
      {
          cout<<e<<" "<<b<<endl;
      }
      else
      {
          cout<<-1<<endl;
      }
  }
}
