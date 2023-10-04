#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  ll n;
  cin>>n;
  map<int,int>mp;

 vector<ll>a;
 vector<ll>b;

 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     a.push_back(x);
 }

 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     b.push_back(x);
 }
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 vector<ll>ax;
 vector<ll>bx;

 for(int i=0;i<a.size();i++)
 {
     int l = i,j;
  //   ax.push_back(a[i]);
     for( j=i+1;j<a.size();j++)
     {
         if(a[i]==a[j])a[j]= 0;
         else break;
     }
     a[j-1] = a[i];
     i=j-1;
 }

 for(int i=0;i<a.size();i++)
 {
     if(a[i]!=0)ax.push_back(a[i]),mp[ax[i]]++;;
 }
 a = ax;

 for(int i=0;i<b.size();i++)
 {
     int l = i,j;
    // bx.push_back(b[i]);
     for( j=i+1;j<b.size();j++)
     {
         if(b[i]==b[j])b[j]= 0;
         else break;
     }
     b[j-1] = b[i];
     i=j-1;
 }

 for(int i=0;i<b.size();i++)
 {
     if(b[i]!=0)bx.push_back(b[i]);
 }
 b = bx;


 //for(int i=0;i<a.size();i++)cout <<a[i]<<" ";cout << endl;
 //for(int i=0;i<b.size();i++)cout <<b[i]<<" ";cout << endl;






 bool vis1[n];
  bool vis2[n];
 for(int i=0;i<n;i++)vis1[i] = false,vis2[i] = false;

 ll sum = 0;
 int idx = 0,cnt = 0,px = -1,pk = -1;



       //  cout << px<<" "<<pk<<endl;



 for(int i=0;i<a.size();i++)
 {
     if(vis2[i]==false){
     ll k = a[i];
      auto l = lower_bound(b.begin(), b.end(), k);
     int pos = (l - b.begin() );
     if(pos == b.size())
     {
         pos--;
         sum += abs(b[pos]-k);
         vis1[pos]=true;
      mp[pos] = i;
     }
     else   sum += abs(k-b[pos]),vis1[pos]=true,mp[pos]=i;
     }
 }

 for(int i=1;i<n;i++)
 {
     if(b[i]==b[i-1]&&vis1[i-1]==true&&mp[a[i]]>=2)
     {
      //   cout << i<<endl;
         vis1[i] = true;
     }
 }

 for(int i=0;i<b.size();i++)
 {
     if(vis1[i] == false){
     ll k = b[i];
    auto l = lower_bound(a.begin(), a.end(), k);
     int pos = (l - a.begin() );
    // cout << pos<<endl;
     if(pos==a.size())
     {
         pos--;
         sum+=abs(a[pos]-k);
     }
      else sum += abs(k- a[pos]);
     }
 }

 cout << sum << endl;



}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
6
2 2 3 3 4 4
6 6 7 7 8 8

*/

