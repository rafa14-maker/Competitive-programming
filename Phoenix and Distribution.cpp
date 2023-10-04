#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   sort(s.begin(),s.end());

   if(k == 1) cout << s << endl;
        else if(k == n) cout << s[n-1] <<endl;
        else if(s[k-1] != s[0]) cout << s[k-1] <<endl;
        else if(s[k] == s[n-1]) cout << s[k-1] << s.substr(k,(n - 1) / k) <<endl;
        else cout << s[k-1] << s.substr(k,n-k) <<endl;
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}
