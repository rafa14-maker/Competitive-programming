#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,m,x;
    cin>>n>>m>>x;
    long long a = x/n;
    if(x%n!=0)a++;
    long long b = x%n;
    if(b==0)b = n;
    cout<<(b-1)*m+a<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
