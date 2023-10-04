#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   if(n<=2)
   {
       cout<<"YES"<<endl;
       return ;
   }
   vector<pair<int,int> >v;

   for(int i=0;i<n;i++)
   {
       int a = arr[i];
       int l = 0,r = v.size()-1;
       int idx = -1;
       while(l<=r)
       {
           int mid = (l+r)/2;
           if(v[mid].first==a)
           {
               idx = mid;
               break;
           }
           else if(v[mid].first>a)r=mid-1;
           else l = mid+1;
       }
     if(idx != -1)  v[idx].second++;
     else v.push_back(make_pair(a,0));
   }

   sort(v.begin(),v.end());

   if(v.size()<=2)
   {
       cout << "YES" << endl;
   }
   else if(v.size()==3)
   {
       int a = (v[2].first + v[1].first)/2;
       if(v[1].first == a) cout << "YES" << endl;
        else cout << "NO" << endl;
   }
   else cout << "NO" << endl;

 /*
   int dx = arr[n/2];


   for(int i=0;i<v.size();i++)
   {
       if(v[i].second == 0)continue;
       int l = 0;
       int r = v.size()-1;
       int k = a+
   }

   cout<<"YES"<<endl;



     // cout<<"yes"<<endl;
 /*  int n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);

   if(n<=2)
   {
       cout<<"YES"<<endl;
       return ;
   }

   ll idx = arr[n-1]-arr[0];
   int l = 1,r=n-2;
   while(l<=r)
   {
       if(l==r)
       {

       }
       ll pk = arr[r]-arr[l];
       if(pk!=idx)
       {
           cout<<"NO"<<endl;
           return ;
       }
       l++;
       r--;
   }
   cout<<"YES"<<endl; */
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

