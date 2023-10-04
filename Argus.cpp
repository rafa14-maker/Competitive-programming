#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define long long ll

int main()
{
  priority_queue<pair<pair<int,int>,int> >pq;
  while(1)
  {
      string s;
      int a,b;
      cin>>s;
      if(s=="#")break;
      cin>>a>>b;
      pq.push(mp(mp(-b,-a),-b));
  }
  int k;
  cin>>k;
  while(k--)
  {
      auto f  =  pq.top();
      pq.pop();
      cout<<-f.first.second<<endl;
      f.first.first+=f.second;
      pq.push(f);
  }

}
