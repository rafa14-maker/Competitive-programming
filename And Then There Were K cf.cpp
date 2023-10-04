#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int mn=0;
    for(int i=0;i<=30;i++)
    {
        int idx = pow(2,i);
        if(idx>n)break;
        if(!(n & idx))mn+=idx;
    }
    cout<<mn+1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
