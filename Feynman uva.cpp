#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   while(cin>>n)
   {
       if(n==0)return ;
       int sum = 0 ;
       for(int i=1;i<=n;i++)sum += (i*i);
       cout<<sum<<endl;
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

