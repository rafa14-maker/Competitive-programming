#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)even.push_back(a);
        else odd.push_back(a);
    }
    for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";
    for(int i=0;i<even.size();i++)cout<<even[i]<<" ";
    cout<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
