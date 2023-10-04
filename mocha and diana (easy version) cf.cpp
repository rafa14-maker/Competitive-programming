#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;

int parent1[N];
int parent2[N];

int pa1(int n)
{
    if(parent1[n]==n)return n;
    return pa1(parent1[n]);
}

int pa2(int n)
{
    if(parent2[n]==n)return n;
    return pa2(parent2[n]);
}

bool sameset1(int a,int b)
{
    return pa1(a) == pa1(b);
}

bool sameset2(int a,int b)
{
    return pa2(a) == pa2(b);
}

void uni1(int a,int b)
{
    if(!sameset1(a,b))
    {
        int x = pa1(a);
        int y = pa1(b);
        parent1[y]=x;
    }
}

void uni2(int a,int b)
{
    if(!sameset2(a,b))
    {
        int x = pa2(a);
        int y = pa2(b);
          parent2[y]=x;
    }
}

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,k;
   cin>>n>>m>>k;

   for(int i=1;i<=n;i++)parent1[i]=i,parent2[i]=i;

   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       if(a>b)swap(a,b);
       uni1(a,b);
   }

   for(int i=0;i<k;i++)
   {
       int a,b;
       cin>>a>>b;
       if(a>b)swap(a,b);
       uni2(a,b);
   }

   vector<pair<int,int> >v;

   for(int i=1;i<=n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
           if(!sameset1(i,j)&&!sameset2(i,j))
           {
               v.push_back(make_pair(i,j));
               uni1(i,j);
               uni2(i,j);
           }
       }
   }

   cout<< v.size() <<endl;

   for(int i=0;i<v.size();i++)
   {
       cout<<v[i].first<<" "<<v[i].second<<endl;
   }

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

