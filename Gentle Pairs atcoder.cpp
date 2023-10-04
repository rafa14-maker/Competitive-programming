#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5][5];
    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double m,n,p;
            m=(arr[j][1]-arr[i][1]);
            n=(arr[j][0]-arr[i][0]);
            p=m/n;
            if(p>=-1&&p<=1)cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
}
