#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   int sum = 0 ;
   for(int i=0;i<s.size();i++)
   {
       int k = (int)(s[i]-'0');
       sum *= 10;
       sum += k;
       sum = sum % 4;
   }
   if(sum == 0) cout << 4 << endl;
   else cout << 0 << endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

