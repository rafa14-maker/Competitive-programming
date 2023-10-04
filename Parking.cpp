#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mx = 0,mn =1e9;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mx=max(a,mx);
            mn=min(a,mn);
        }
        cout<<(mx-mn)*2<<endl;
    }
}
