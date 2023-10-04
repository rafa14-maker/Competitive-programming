#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;
    int arr[n+5];
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>d)tr=false;
    }
    if(tr)
    {
        cout<<"YES"<<endl;
        return ;
    }
    sort(arr,arr+n);

    if((arr[0]+arr[1])<=d)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
