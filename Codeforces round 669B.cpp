#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
   }
   sort(v.begin(),v.end());
   for(int i=n-2;i>=0;i--)
   {
       int k=v[i+1];
       int pk=-1;
       int idx=-1;
       for(int j=i;j>=0;j--)
       {
           if(v[j]!=-1&&__gcd(v[j],k)>pk)
           {
               pk=__gcd(v[j],k);
               idx=j;
           }
       }
       if(pk>=0)
       {
          swap(v[i],v[idx]);
       }
   }
   for(int i=n-1;i>=0;i--)cout<<v[i]<<" ";cout<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

