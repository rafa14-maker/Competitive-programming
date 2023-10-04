#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e3+5;

int test;
int frr[N];

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.first < b.first;
}

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   for(int i=1;i<=k;i++)frr[i] = 1e3+5;
 //  pq.clear();
   pq.push(make_pair(0,n));
   vector<int>v;

   while(!pq.empty())
   {
       pair<int,int>f = pq.top();
       pq.pop();
       int d = f.first;
       int u = f.second;
       if(u>k)continue;
     //  cout << u<<" "<<d<<endl;
    //   d = d*(-1);
       if(frr[u]>d)
       {
           frr[u] = d;
           v.clear();
           int pk = u;
           for(int i=2;i<=pk;i++)
           {
               if(i == u)break;
               if(pk%i==0)
               {
                   v.push_back(i);
                   while(pk%i==0&&pk>0)pk/=i;
               }
           }

           for(int i=0;i<v.size();i++)
           {
             //  int pk = (d+1)*(-1);
               pq.push(make_pair(d+1,u+v[i]));
           }

       }
   }

   if(frr[k] >= 1e3+5)printf("Case %d: -1\n",++test);
   else printf("Case %d: %d\n",++test,frr[k]);

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

