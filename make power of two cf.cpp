#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e18;

vector<string>vs;

string con(ll n)
{
    string s;
    while(n>0)
    {
        int r = n%10;
        s += (char)('0'+r);
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

void f()
{
    ll idx =0,pk=0;
    while(pk<=N)
    {
        pk = pow(2,idx);
        string s = con(pk);
        vs.push_back(s);
        idx++;
    }
}

int match (string arr,string frr)
{
    int idx = 0;
    for(int i=0;i<frr.size()&&idx<arr.size();i++)
    {
        if(frr[i]==arr[idx])
        {
            idx++;
        }
    }
   // idx++;
  // cout<<arr<<" "<<frr<<" "<<idx<<" ";

   int a  = arr.size()-idx;
   int b  = frr.size()-idx;

  // cout<<a<<" "<<b<<" "<<a+b<<endl;

   return a+b;
}

void solve()
{
  string s;
  cin>>s;
  int mx = 1e8+7;

  for(int i=0;i<vs.size();i++)
  {
     // cout<<vs[i]<<" "<<s<<endl;
     int pk = match(vs[i],s);
   //  int kp = match(s,vs[i]);
     mx = min(pk,mx);
     //mx = min(kp,mx);
  }

  cout<<mx<<endl;

}

int main()
{
    f();
  // for(int i=0;i<vs.size();i++)cout<<vs[i]<<endl;
  int q;
  cin>>q;
  while(q--)solve();
}

/*

1
687194767

*/
