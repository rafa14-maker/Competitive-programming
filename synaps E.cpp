#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
vector<int>adj[30];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

void solve()
{
  cin>>n>>m;
  int arr[n+5];
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       arr[i] = a;
       for(int j=0;j<19;j++)
       {
           if(!Check(a,j)&&Check(a))adj[j].push_back(i);
       }
   }

   while(m--)
   {
       set<int>vk;
       int a,l,r;
       cin>>l>>r>>a;
       map<int,int>mp;
       for(int i=0;i<19;i++)
       {
           if(!Check(a,i))
           {
               for(int j=0;j<adj[i].size();j++)
               {
                   int v = adj[i][j];
                if(v<=r&&v>=l)   vk.insert(arr[v]);
               }
           }
       }

       int ans  = 0 ;

       for(auto it = vk.begin();it!=vk.end();it++)
       {
           int k = *it;
            k ^= a;
            ans = max(k,ans);
       }
       cout<<ans<<endl;
   }

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

