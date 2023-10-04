#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(b<a)swap(a,b);
    long long k = a*(c+1);
   // if(b%a!=0)k++;
    if(k>=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
