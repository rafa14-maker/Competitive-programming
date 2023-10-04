#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   int k;
   cin>>k;
   vector<ll>v;

   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '.')v.push_back(i);
   }

   if(v.size()<=k)
   {
       cout<<s.size()<<endl;
       return ;
   }
   if(k==0)
   {
       if(v.size()==0)cout<<s.size()<<endl;
       else
       {
           int cnt =0 ,ans = 0;
           for(int i=0;i<s.size();i++)
           {
               if(s[i]!='.')cnt++;
               else
               {
                   ans = max(ans,cnt);
                   cnt =0;
               }
           }
           ans = max(ans,cnt);
           cout<<ans<<endl;
       }
       return ;
   }

   vector<ll>frr;

    ll ans = 0;

   for(int i=0;i<v.size();i++)
   {
       if(i==0)frr.push_back(v[i]);
       else if(i==v.size()-1)frr.push_back(s.size()-1-v[i]+(-v[i-1]+v[i]-1));
       else
       {
           frr.push_back(v[i]-v[i-1]-1);
           ans = max(ans,v[i]-v[i-1]-1);
       }
   }

   for(int i=1;i<frr.size();i++)
   {
       frr[i]+=frr[i-1];
   }

  // for(int i=0;i<frr.size();i++)cout<<frr[i]<<" ";cout<<endl;

  // ll ans = 0;

   for(int i=0;i<frr.size();i++)
   {
       if(i<k)ans = max(ans,frr[i]+i+1);
       else if(i == frr.size()-1)
       {
           ans = max(ans,frr[i]-frr[i-k]+k);
       }
       else
       {
           ans = max(ans,frr[i]-frr[i-k]+k+(frr[i+1]-frr[i]));
       }
   }

   cout << ans << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

/*

X.X.X.X.X.X.X.X.X.X.X
5

*/

