#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 5*1e5+5;
int p[N];
int arr[N][3];
vector<pair<int,int> >adj[N];


int f(int n)
{
    if(p[n]==n)return n;
    else f(p[n]);
}

int fp(int n,int cnt)
{
    if(cnt == 0)return n;
    fp(p[n],cnt-1);
}

void solve()
{
   // cout<<"yes"<<endl;
   for(int i=1;i<=N;i++)p[i]=i;
   vector<int >v;
   map<int,int>mp;
   int n;
   cin>>n;
   int cnt = 0 ;
   int pdx = 0;
  // int arr[N][3];
   while(n--)
   {
       int idx;
       cin>>idx;
       if(idx==1)
       {
           int a;
           cin>>a;
           v.push_back(a);
       }
       else
       {
           int a,b;
           cin>>a>>b;
           arr[pdx][0] = v.size()-1;
           mp[v.size()-1]=1;
         int kp = v.size()-1;
         adj[kp].push_back(make_pair(a,b));
           arr[pdx][1] =  a;
           arr[pdx][2] = b;
           pdx++;
       }
   }

vector<int>krr;
   for(int i=v.size()-1;i>=0;i--)
   {
       if(mp[i]==1)
       {
         /*  int a = arr[pdx-1][1];
           int b = arr[pdx-1][2];
          // int fk  = f(a);
           p[a] = b;
           pdx--;*/

           for(int j=0;j<adj[i].size();j++)
           {
               int a = adj[i][j].first;
               int b = adj[i][j].second;
               int fk = f(a);
               p[fk] = b;
           }

       }
       krr.push_back(f(v[i]));
   }
   for(int i=krr.size()-1;i>=0;i--)cout << krr[i]<<" ";
   cout << endl;



}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

