#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d,e,f;
    cin>>d>>e>>f;
    int sum=0;
    if(d>a)sum+=d-a;
    if(e>b)sum+=e-b;
    if(f>c)sum+=f-c;
    cout<<sum<<endl;
}

int main()
{
   solve();
}
