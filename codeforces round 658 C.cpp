#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   int n;
   cin>>n;
   string arr,frr;
   cin>>arr>>frr;
   vector<int>v;
   for(int i=arr.size()-1;i>=0;i--)
   {
       if(arr[i]!=frr[i])v.push_back(i);
   }
   cout<<v.size()<<" ";
   for(int i=0;i<v.size();i++)cout<<v[i]+1<<" ";cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

    //solve();
}

