#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,a,b;
    cin>>n>>k;
    vector<string>s;
    vector<pair<int,int> >v[10005];

     for(int i=0;i<n;i++)
     {
         string arr;
         cin>>arr;
         s.push_back(arr);
         cin>>a>>b;
         v[a].push_back(make_pair(b,i));
     }

     for(int i=1;i<=k;i++)
     {
         sort(v[i].begin(),v[i].end());
         int p=v[i].size();
         if(p>2&&v[i][p-3].first==v[i][p-2].first)
         {
             cout<<"?\n";
         }
         else
         {
             cout<<s[v[i][p-1].second]<<" "<<s[v[i][p-2].second]<<"\n";
         }
     }
}
