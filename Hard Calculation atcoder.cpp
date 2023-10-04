#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string arr,frr;
   cin>>arr>>frr;
   bool tr = true;

   for(int i=arr.size()-1,j=frr.size()-1;i>=0,j>=0;i--,j--)
   {
       int a = (int)(arr[i]-'0');
       int b = (int)(frr[j]-'0');
       if(a+b>=10)tr=false;
   }
   if(tr)cout<<"Easy"<<endl;
   else cout<<"Hard"<<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}

