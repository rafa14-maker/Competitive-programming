#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 2e5+5;
vector<int>adj[N];

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;

   for(int i=0;i<=n;i++)adj[i].clear();

   int arr[n+5];
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       adj[a].push_back(i);
   }

   vector<int>v;

    int mx = 0,l =0 ,r=0;

    while(l<n)
    {
        mx = 0;
        for(int i=0;i<=n;i++)
        {
            auto it = lower_bound(adj[i].begin(),adj[i].end(),l);
            if(it == adj[i].end())
            {
                mx = i;
                break;
            }
            r = max(r,*it);
        }
        v.push_back(mx);
        l = r +1;
        r = l;
    }

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

