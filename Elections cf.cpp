#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;

   vector<pair<int,int> >v;

   for(int i=0;i<3;i++)
   {
       int a;
       cin>>a;
       v.push_back(make_pair(a,i));
   }
   sort(v.begin(),v.end());
   int arr[3]={0};

   for(int i=2;i>=0;i--)
   {
       if(i==2)
       {
           if(v[i].first>v[i-1].first)
           {
               arr[v[i].second]=0;
           }
           else
           {
                arr[v[i].second]=1;
           }
       }
       else
       {
           int kp = v[2].first;
           int pk = v[i].first;
           arr[v[i].second] = kp-pk+1;
       }
   }

   for(int i=0;i<3;i++)cout<<arr[i]<<" ";cout<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

