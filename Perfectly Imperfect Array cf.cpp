#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    bool tr=false;

    for(int i=0;i<n;i++)
    {
        long long sum=arr[i];
        long long k = sqrt(sum);
        if(k*k!=sum)tr=true;
    }

    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}



