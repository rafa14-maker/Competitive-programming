#include<bits/stdc++.h>
using namespace std;

int n,m;

void solve()
{
    int arr[n+5],frr[m+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];
    sort(arr,arr+n);
    sort(frr,frr+m);

    if(m<n)
    {
        cout<<"Loowater is doomed!"<<endl;
        return ;
    }

    int idx=0;
    long long sum=0;
    bool tr=false;

    for(int i=0;i<n;i++)
    {
        bool kp=true;
        for(int j=idx;j<m;j++)
        {
            if(frr[j]>=arr[i])
            {
                kp=false;
                idx=j+1;
                sum+=frr[j];
                break;
            }
        }
        if(kp)tr=true;
    }

    if(!tr)cout<<sum<<endl;
    else cout<<"Loowater is doomed!"<<endl;

}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}
