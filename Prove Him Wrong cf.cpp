#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<ll>v;
const int N = 1e9;

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

   if(n>v.size())
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
       for(int i=0;i<n;i++)
       {
           cout<<v[i]<<" ";
       }
       cout << endl;
   }
}

int main()
{
    int idx=1;
    v.push_back(1);
    while(idx<N)
    {
       idx*=3;
      if(idx<=N)  v.push_back(idx);
      else break;
    }
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

