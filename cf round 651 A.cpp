#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

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

ll  f(ll n)
{
    ll kp=1;
    for(int i=2;i<=sqrt(n);i++)
    {
      if(n%i==0&&(i%2!=((n/i)%2)))
      {
         if(i%2==1)kp*=i;
         else kp*=(n/i);
      }
    }
    return kp;
}

void solve()
{
  //bk();
   ll n;
   cin>>n;
   if(n==1)cout<<"FastestFinger"<<endl;
  else if(n%2==1||n==2)cout<<"Ashishgup"<<endl;
   else
   {
     ll kp =f(n);
     n/=kp;
      if(n==2||kp==1)cout<<"FastestFinger"<<endl;
      else cout<<"Ashishgup"<<endl;
   }
}


int main()
{
    hello;
   int q;cin>>q;while(q--)solve();

   // solve();
}
