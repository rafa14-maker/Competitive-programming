#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;
vector<int>adj[N];
int arr[N];
deque<int>dq;
bool vis[N];
int n;

void bfs(int nf)
{
    queue<int>q;
    q.push(nf);
    cout << nf << endl;

    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        if(vis[f])continue;
        vis[f] = true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v])
            {
                q.push(v);
            }
        }
        while(!dq.empty())
        {
            int kf = dq.front();
            if(vis[kf])
            {
                dq.pop_front();
                continue;
            }
            if(kf > f)
            {
                break;
            }
            else
            {
                dq.pop_front();
           //     cout << kf << endl;
                q.push(kf);
            }
        }
    }
}

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first < b.first)return true;
    if(a.first == b.first &&a.second < b.second)return true;
    return false;
}


void solve()
{
  //  cout<<"yes"<<endl;
 /* cin>>n;
  for(int i=1;i<=n;i++)adj[i].clear();
  memset(vis,false,sizeof vis);

  for(int i=1;i<=n;i++)cin>>arr[i];

  for(int i=1;i<n;i++)
  {
      if(arr[i]>arr[i+1])
      {
          adj[arr[i]].push_back(arr[i+1]);
          dq.push_back(arr[i]);
      }
  }

  int cnt = 0;

  sort(arr+1,arr+n+1);

  for(int i=n;i>=1;i--)
  {
      if(!vis[arr[i]]){
      bfs(arr[i]);
      cnt++;
      }
  }

  cout << cnt << endl;*/

  int n;
  cin>>n;

  int arr[n+5];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  vector<pair<int,int> >v;

  int l=0,r=0;

  for(int i=0;i<n;i++)
  {
      l = arr[i];
      int lk = l;
      int j;
      for( j=i;j<n;j++)
      {
          if(arr[j]>lk)
          {
              break;
          }
          lk = arr[j];
      }
      r = arr[j-1];
      i = j-1;
      v.push_back(make_pair(r,l));
  }

 sort(v.begin(),v.end(),cmp);

 //for(int i=0;i<v.size();i++)cout << v[i].first <<" "<<v[i].second<< endl;

 int cnt = 0;
  l = -1,r = -1;

 for(int i=0;i<v.size();i++)
 {
    if(l == -1&& r== -1)
     {
         l = v[i].first;
         r = v[i].second;
         cnt ++;
     }
     else
     {
         if(l<=v[i].first&&r>=v[i].first || l<=v[i].second&&r>=v[i].second)
         {
             l = min(l,v[i].first);
             r = max(r,v[i].second);
         }
         else if(l>=v[i].first&&l<=v[i].second || r<=v[i].second&&r>=v[i].first)
         {
             l = min(l,v[i].first);
             r = max(r,v[i].second);
         }
         else
         {
             cnt++;
             l = v[i].first;
             r = v[i].second;
         }
     }
 }

 cout << cnt << endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
5
3 1 5 2 4

*/

