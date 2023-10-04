#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp;
    map<int,int>frr;
  //  set<int>s;
   int n;

   vector<int>v;

   while(scanf("%d",&n)!=EOF)
   {
       v.push_back(n);
       mp[n]++;
   }

   for(int i=0;i<v.size();i++)
   {
       if(frr[v[i]]==0)
       {
           cout<<v[i]<<" "<<mp[v[i]]<<endl;
           frr[v[i]]=1;
       }
   }
}
