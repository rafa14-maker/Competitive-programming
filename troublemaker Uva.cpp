#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> >v;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
