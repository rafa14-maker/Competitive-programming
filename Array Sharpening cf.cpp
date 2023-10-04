#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int idx1=0,idx2=n-1,cnt=0;

    for(int i=0;i<n;i++)
    {
       if(arr[i]<i)break;
       idx1=i;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<cnt)break;
        cnt++;
        idx2=i;
    }

    if(idx1>=idx2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
