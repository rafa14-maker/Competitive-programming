/*
 * author :Sadik Hassan
 *
*/

#include "bits/stdc++.h"
using namespace std;
using   ll =          long long;
using   ld =          long double;
#define nl            "\n"
#define pb            push_back
#define fi            first
#define se            second
#define MP            make_pair
#define PI            (acos(-1.0))
#define rep1(i,n)     for(int i=1;i<=n;i++)
#define rep(i,n)      for(int i=0;i<n;i++)
#define urep(i,n)     for(int i=n-1;i>=0;i--)
#define urep1(i,n)    for(int i=n;i>=1;i--)
#define SZ(s)         (int)s.size()
#define all(x)        (x).begin(), (x).end()
#define rall(x)       (x).rbegin(), (x).rend()
#define w(t)          int t;cin>>t;while(t--)
#define _SAD()     	  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cout<<fixed<<setprecision(12);

typedef vector<int> vi;
typedef vector<ll> vii;
typedef set<int> si;
typedef set<ll> sii;
/*---------------------------------------------------------------------*/
//freopen("intput.in","r",stdin);
//freopen("output.out","w",stdout);
// cout<<"Case "<<tt<<": ";tt++;
const int N=(int)1e5+3;
const ll MOD=(ll)1e9+7;
const ll INF=(ll)1e18+5;
const ll nn=1e5+5;

void solve()
{
    int n,m;
    cin>>n>>m;
    string arr,frr;
    cin>>arr>>frr;
    string krr;
    int idx=0;
    for(int i=0;i<frr.size();i++)
    {
        int a,b,c;

        a =(int) frr[i]-'a';
        b = (int) arr[idx]-'a'+1;
        c = (a+b)%26;

        cout<<a<<" "<<b<<" "<<c<<endl;

        char pk = (char)('a'+c);

        krr+=pk;
        idx++;

        if(idx==arr.size())idx=0;
    }

    cout<<krr<<endl;
}

int main()
{
    solve();
}
