#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   while(1)
   {
       cin>>n;
       if(n==0)break;
       int sum = 0, idx = 0;
     //  n++;
       while(n>2)
       {
           sum += n/3;
           n = n/3 + (n%3);
       }
       if(n==2)sum++;
       cout<< sum<<endl;
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

