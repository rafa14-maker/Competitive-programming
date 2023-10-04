#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>k>>n;
    int mn=0,mx=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>k-a)a=k-a;
        if(a>mn)mn=a;
        if(k-a>mx)mx=k-a;
    }
    cout<<mn<<" "<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
