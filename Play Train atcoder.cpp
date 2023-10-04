#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e6+5;
int parent[N];
int child[N];
vector<int>v;

int fi(int u)
{
    if(u==parent[u])return u;
   else return fi(parent[u]);
}

void pi(int n)
{
    v.push_back(n);
    if(child[n]==n)return ;
    pi(child[n]);
}

void solve()
{
   // cout<<"yes"<<endl;
   int n,q;
   cin>>n>>q;

   for(int i=1;i<N;i++)
   {
       parent[i]=i;
       child[i]=i;
   }

   while(q--)
   {
       int a,b,c;
       cin>>a;
      // cout<<a<<endl;
       if(a==1)
       {
           cin>>b>>c;
           parent[c] = b;
           child[b] = c;
       }
       else if(a==2)
       {
           cin>>b>>c;
           parent[c] = c;
           child[b] = b;
       }
       else if(a==3)
       {
        if(v.size()>0)   v.clear();
           cin>>b;
           int u = fi(b);
           pi(u);
           cout<<v.size()<<" ";
           for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
       }
   }

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

