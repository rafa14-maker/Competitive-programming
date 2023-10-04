#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[n+5]={0};

    int cnt =1;

    for(int i=2;i<=1000;i++)
    {
        bool tr=false;
        for(int j=0;j<n;j++)
        {
            if(frr[j]==0&&arr[j]%i==0)
            {
                tr=true;
                frr[j]=cnt;
            }
        }
        if(tr)cnt++;
    }

    cout<<cnt-1<<endl;
    for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
