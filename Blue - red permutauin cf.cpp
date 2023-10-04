#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   int vis[n+5];
   for(int i=0;i<n;i++)cin>>arr[i],vis[i+1]=false;
   string s;
   cin>>s;
   vector<int>red;
   vector<int>blue;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='B')blue.push_back(arr[i]);
       else red.push_back(arr[i]);
   }
   sort(blue.begin(),blue.end());
   sort(red.begin(),red.end());
 //  reverse(red.begin(),red.end());

// for(int i=0;i<red.size();i++)cout<<red[i]<<" ";cout<<endl;

   int l = 1,r = n;

   for(int i=0;i<blue.size();i++)
   {
       if(blue[i]>=l)
       {
           vis[l] = true;
           l++;
       }
   }

   for(int i=red.size()-1;i>=0;i--)
   {
       if(red[i]<=r)
       {
           vis[r] = true;
           r--;
          // cout<<i<<endl;
       }
    //   cout<<red[i]<<" "<<r<<endl;
   }
//cout<<l<<" "<<r<<endl;
   bool tr = true;

   for(int i=1;i<=n;i++)
   {
       if(!vis[i])
       {
          // cout<<i<<endl;
           tr =false;
       }
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
4
-2 -1 4 0
RRRR

*/

