#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
string s;
vector<int>adj[30];
int arr[30];

void f()
{
    for(int i=0;i<s.size();i++)
    {
        int k = (int)(s[i]-'a');
        adj[k].push_back(i+1);
    }
}

int cal(string frr)
{
  for(int i=0;i<30;i++)arr[i]=0;

  int sum = 0;

  for(int i=0;i<frr.size();i++)
  {
      int k = (int)(frr[i]-'a');
       int idx = arr[k];
       sum = max(sum,adj[k][idx]);
       arr[k]++;
  }

  return sum;

}


void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   cin>>s;
   f();
   int q;
   cin>>q;
   while(q--)
   {
       string frr;
       cin>>frr;
      cout<< cal(frr) <<endl;
   }
}

int main()
{
  // int q;cin>>q;while(q--)solve();
  solve();
}

