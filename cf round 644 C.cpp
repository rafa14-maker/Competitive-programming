#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    bool tr=false;
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n&&arr[i+1]==arr[i]+1)tr=true;
        if(arr[i]%2==0)even++;
        if(arr[i]%2==1)odd++;
    }
    if(odd%2==0&&even%2==0)cout<<"YES"<<endl;
    else if(odd%2==1&&even%2==1&&tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

  //  solve();
}

