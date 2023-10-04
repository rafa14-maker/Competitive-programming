#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int arr[n+5]={0};
    int frr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
        frr[a]++;
        mp[a]=9;
    }
    for(int i=1;i<n;i++)arr[i]+=arr[i-1];
    for(int i=0;i<n;i++)arr[i]/=3;
    for(int i=n-1;i>=1;i--)frr[i-1]+=frr[i];
    for(int i=0;i<n;i++)frr[i]/=3;

    long long sum=0;

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<3;k++)
        {
            if(i+k<n&&mp[i]==9&&mp[i+k]==9)
            {
             //  cout<<arr[i]<<" "<<frr[i+k]<<endl;
               sum+=arr[i]+frr[i+k];
            }
        }
    }
    cout<<sum<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

