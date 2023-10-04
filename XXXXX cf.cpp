#include<bits/stdc++.h>
using namespace std;
using ll = long long;



void solve()
{
    int n,k;
    cin>>n>>k;
    ll sum=0;
    ll l = -1,r=-1;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%k)
        {
           if(l==-1) l=i;
            r=i;
        }
        sum+=a;
    }

  if(sum%k)cout<<n<<endl;
  else if(l==-1)cout<<-1<<endl;
  else cout<<n-min(n-r,l+1)<<endl;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
