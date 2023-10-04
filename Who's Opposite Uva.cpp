#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a , b,c;
    cin>>a>>b>>c;
    if(a>b)swap(a,b);

    int k = b-a;

    int f,p;

    if(c<b)f=c+k;
    else f=c-k;

    if(c>f)swap(c,f);

    if(abs(a-c)==abs(b-f)&&a!=f&&b!=f)cout<<f<<endl;
    else cout<<-1<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
