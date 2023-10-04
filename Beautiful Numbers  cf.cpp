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
   for(int i=0;i<n;i++)cin>>arr[i];
   vector<pair<int,int> >v;
   for(int i=0;i<n;i++)
   {
       v.push_back(make_pair(arr[i],i+1));
   }
   sort(v.begin(),v.end());
   int l = n,r = 0;

   string s;

   for(int i=0;i<v.size();i++)
   {
       int a = v[i].first;
       int b = v[i].second;
    //   cout << l << " " << r << endl;
       if(a == 1)
       {
           s+='1';
           l = min(l,b);
           r = max(r,b);
       }
       else
       {
           l = min(l,b);
           r = max(r,b);
           if(r-l+1 == a)s+='1';
           else s+='0';
       }
       // cout << l << " " << r << " " << a << endl;
   }

   cout << s << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  //   solve();
}

