#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   while(1)
   {
       cin>>s;
       if(s=="0")break;
       int k = 0;
       if(s.size()%2==0)
       {
           int f = (int)(s[0]-'0');
           int sk = (int)(s[0]-'1');
           k = f*10+sk;
       }
       else
       {
           int f = (int)(s[0]-'0');
           k = f;
       }
       k = sqrt(k);
       cout << k;
       int mn = (s.size()-1)/2;
       while(mn>0)cout<<0,mn--;
       cout << endl;
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
