#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   int counter=0;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       if(a>=k)counter++;
       else
       {
           v.push_back(a);
       }
   }
sort(v.begin(),v.end());
  int len=v.size();

  for(int i=v.size()-1;i>=0;i--)
  {
      int pk=k/v[i];
      if(k%v[i]!=0)pk++;
      if(len-i>=pk)
      {
         // cout<<v[i]<<endl;
          counter++;
          len=i;
      }
  }
   cout<<counter<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}

