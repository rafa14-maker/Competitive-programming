#include<bits/stdc++.h>
using namespace std;
using ll = long long;

queue<int>v;
multiset<int>mt;

void solve()
{
   int k;
   cin>>k;
   if(k==1)
   {
      int a;
       cin>>a;
      v.push(a);
   }
   else if(k==2)
   {
          if(mt.empty())
          {
               int f = v.front();
              cout<<f<<"\n";
               v.pop();
          }
          else
          {
              cout<< *mt.begin() <<endl;
              mt.erase(mt.begin());
          }
      }
  else if(k==3)
   {
       while(!v.empty())
       {
           int f = v.front();
           mt.insert(f);
           v.pop();
       }
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
