#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

    int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<bool> used(n + 1, false);
        sort(a.begin(),a.end());
        for (auto i : a) {
            while (i > n) i /= 2;
            while (used[i]) i /= 2;
            if (i == 0) {
                break;
            }
            used[i] = true;
        }
        bool ok = true;
        for (int i = 1; i <= n; ++i) {
            ok &= used[i];
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

