#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5][3];
    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
    bool tr=false;
    for(int i=0;i<n;i++)
    {
        bool fk=true;
        for(int j=0;j<n;j++)
        {
            int pk=abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1]);
            if(pk>k)fk=false;
        }
        if(fk)tr=true;
    }
    if(tr)cout<<1<<endl;
    else cout<<-1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
