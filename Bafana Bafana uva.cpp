#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int test;

void solve()
{
   // cout<<"yes"<<endl;
   int n,k,p;
   cin>>n>>k>>p;
   int pk = p%n;
   k = k +pk;
   if(k>n)k = k%n;
  printf("Case %d: %d\n",++test,k);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

