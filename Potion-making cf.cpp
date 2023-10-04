#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n==100)
    {
        cout<<1<<endl;
        return ;
    }
 /*   if(n==100)cout<<1<<endl;
    else if(n==50)cout<<2<<endl;
    else if(n==75)cout<<4<<endl;
    else if(n==25)cout<<4<<endl;
    else cout<<100<<endl;*/

        int k = 100-n;
        int gd = __gcd(k,n);
        k/=gd;
        n/=gd;
        cout<<n+k<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
