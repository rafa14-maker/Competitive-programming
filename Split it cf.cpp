#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   bool tr=true;
   string str;
   cin>>str;
   int cnt=0;
   for(int i=0,j=str.size()-1;i<=j;i++,j--)
   {
       if(str[i]!=str[j])
       {
           tr=false;
           break;
       }
       cnt++;
   }
   if(cnt>k||k==0)cout<<"YES"<<endl;
   else if(cnt==k&&2*k<str.size())cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

