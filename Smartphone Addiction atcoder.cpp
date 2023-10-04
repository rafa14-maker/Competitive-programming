#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int c,m,t;N
    cin>>c>>m>>t;
    int f=c;
    int arr[m+5][2];
    for(int i=0;i<m;i++)cin>>arr[i][0]>>arr[i][1];
    bool tr=true;
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            c-=(arr[i][0]);
            if(c<=0)tr=false;
            c+=(arr[i][1]-arr[i][0]);
            c=min(c,f);
        }
        else
        {
            c-=(arr[i][0]-arr[i-1][1]);
            if(c<=0)tr=false;
            c+=(arr[i][1]-arr[i][0]);
            c=min(c,f);
        }
    }
  //  cout<<c<<endl;
    c-=(t-arr[m-1][1]);
    if(c<=0)tr=false;
   // cout<<c<<endl;
    if(tr)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main()
{
    solve();
}
