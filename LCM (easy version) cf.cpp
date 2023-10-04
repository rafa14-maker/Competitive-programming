#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(n%2==0)
    {
       if(n%3==0)cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
       else if(((n-2)/2)%2==0)cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
       else cout<<4<<" "<<(n-4)/2<<" "<<(n-4)/2<<endl;
      // else cout<<n/2<<" "<<(n/4)<<" "<<n/4<<endl;
    }
    else
    {
        int pk = n-1;
        cout<<1<<" "<<pk/2<<" "<<pk/2<<endl;
    }
}

int main()
{
    int q;cin>>q;while(q--)solve();
}
