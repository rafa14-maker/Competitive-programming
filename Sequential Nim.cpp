#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int cnt=1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)cnt++;
        else if(arr[i]>1)
        {
            if(cnt%2==1)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
            return;
        }
    }
    if(cnt%2==0)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
            return;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
