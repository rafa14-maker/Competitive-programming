#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int arr[N],frr[N];

vector<int>v;
set<int>st;
map<int,int>mp;

void bk()
{
    v.clear();
    st.clear();
    mp.clear();
}

void solve()
{
  //bk();

}


int main()
{
    hello;
 //   int q;cin>>q;while(q--)solve();

   // solve();
}
