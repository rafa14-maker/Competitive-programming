#include<bits/stdc++.h>
using namespace std;

int a[3],b[3],n=3;

int cal(int i,int j)
{
    int mn=min(a[i],b[j]);
    a[i]-=mn;
    b[j]-=mn;
    return mn;
}

void solve()
{
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    int sum=0;

    sum+=(cal(2,1)*2);
    sum+=(cal(2,2)*0);
    sum+=(cal(0,2)*0);
    sum+=(cal(0,1)*0);
    sum+=(cal(1,1)*0);
    sum+=(cal(2,0)*0);
    sum+=(cal(0,0)*0);
    sum+=(cal(1,0)*0);
    sum+=(cal(1,2)*(-2));

    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
