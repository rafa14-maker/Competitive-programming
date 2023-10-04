#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<=pow(2,n);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
            }
        }
        if(sum==k)
        {
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
