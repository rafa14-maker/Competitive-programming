/*
    /\ In The Name Of Allah /\
    Author : Jawahiir Nabhan
*/
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
const int N = 55;

int n,k;
int a[N][N];
int main()
{
    cin>> n >> k;
    vector <pair<int, int>> v[k];
    vector <int> res(k + 1, 1e9 + 10);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin>> a[i][j];
            v[a[i][j]].pb({i, j});
        }
    }
    bool ok = true;
    for(int i = 1;i <= k;i++)
        if(v[i].empty()) ok = false;
    if(!ok) return cout<< -1,0;

    for(int u = 0;u < v[0].size();u++){
        queue <pair<int, int>> q;
        q.pb(v[0][u]);
        while(!q.empty())
        {
            pair <int, int> p = q.front();
            q.pop();
            int x = a[p.first][p.second];
            for(int i = 0;i < (int)v[x + 1].size();i++){
                pair <int, int> t = v[x + 1][i];
                res[x + 1] = min(res[x + 1], res[x] + abs(p.first - t.first) + abs(p.second - t.second));
                q.pb(t);
            }
        }
    }
    cout<< res[k] << endl;
}
