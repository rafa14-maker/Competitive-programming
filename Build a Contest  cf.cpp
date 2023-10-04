#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;

deque<int>adj[N];

void solve()
{
   // cout<<"yes"<<endl;
    int n,m;
    cin>>n>>m;
    string s;

    int arr[m+5];
    for(int i=0;i<m;i++)cin>>arr[i];

    for(int i=0;i<m;i++)s+='0';

    for(int i=0;i<m;i++)
    {
        int a = arr[i];
        adj[a].push_back(i);
    }

    while(1)
    {
        bool tr = true;
        int idx = 0;
        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==0)tr = false;
            else
            {
                int f = adj[i].front();
                adj[i].pop_front();
                idx = max(idx,f);
            }
        }
        if(!tr)break;
        s[idx]  = '1';
    }

    cout << s << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

