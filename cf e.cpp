#include<bits/stdc++.h>
using namespace std;

bool vis[200010];

void solve()
{
     int n ;
    cin >> n ;
    priority_queue<int> pq;
    vector<int> v;

    for (int i = 1 ;i <= n ; ++i)vis[i]=0;
    for (int i = 0 ;i < n ; ++i){
        int x ;
        cin >> x ;
        v.push_back(x);
        if (vis[x]){
            cout << -1*pq.top() << " " ;
            pq.pop() ;
            continue;
        }
        cout << x << " " ;
        vis [x]=1 ;
        x--;
        while(!vis[x]&&x){vis[x]=1; pq.push(-1*x);x--;}
    }
    cout << endl ;

while(!pq.empty())pq.pop();

    for (int i = 1 ;i <= n ; ++i)vis[i]=0;
    for (int i = 0 ;i < n ; ++i){
        int x ;
         x=v[i];
        if (vis[x]){
            cout << pq.top() << " " ;
            pq.pop() ;
            continue;
        }
        cout << x << " " ;
        vis [x]=1 ;
        x--;
        while(!vis[x]&&x){vis[x]=1; pq.push(x);x--;}
    }
    cout <<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}





