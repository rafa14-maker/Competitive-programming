#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve()
{
    int n;
    cin>>n;
    ll arr[n+5][3];
    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll a=arr[i][1];
            ll b=arr[i][2];
            ll c=arr[j][1];
            ll d=arr[j][2];
            if(arr[i][0]==2)a+=1;
            if(arr[i][0]==3)b-=1;
            if(arr[i][0]==4)a+=1,b-=1;

             if(arr[j][0]==2)c+=1;
            if(arr[j][0]==3)d-=1;
            if(arr[j][0]==4)c+=1,d-=1;

            if(a<=c&&c<=b||a<=d&&d<=b||c<=a&&a<=d||c<=b&&b<=d)cnt++;

        }
    }
    cout<<cnt<<endl;
}


int main()
{
    solve();
}
