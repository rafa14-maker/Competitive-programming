#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   string arr,frr;
   cin>>arr>>frr;
   vector<int>v;
   int a = 0, b = 0;
   for(int i=0;i<arr.size();i++)
   {
      if(arr[i]=='1')a++;
      else b++;
      if(a==b)v.push_back(i);
   }

   bool tr = true;

   for(int i=0;i<v.size();i++)
   {
     //  cout<<v[i]<<endl;
       int l , r;
       if(i==0)l = 0;
       else l = v[i-1]+1;
       r = v[i];
       int cnt = 0;
       if(l<n&&arr[l]!=frr[l])cnt=1;
       for(int i=l;i<=r;i++)
       {
           if(arr[i]!=frr[i])
           {
               if(cnt==0)tr=false;
           }
           else if(arr[i]==frr[i]&&cnt==1)tr=false;
       }
   }

   int len  = v.size()-1;
  // cout<<tr<<endl;

   if(v.size()>0&&v[len]<n-1)
   {
       int l , r;
       l = v[len]+1;
       r = n-1;
       for(int i=l;i<=r;i++)if(arr[i]!=frr[i])tr=false;
   }

 //  cout<<v.size()<<endl;

   if(v.size()==0)
   {
       for(int i=0;i<arr.size();i++)if(arr[i]!=frr[i])tr=false;
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
6
001100
110000

*/

