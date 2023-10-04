#include<bits/stdc++.h>
using namespace std;

int frr[105];
int n;

int f(int left,int right,int sum1,int sum2)
{


    int ans=0;
    ans = max(ans,f(left,right+1,sum1,sum2+arr[right]-arr[left-1]));
    ans = max(ans,f(left+1,right,sum1+arr))
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>frr[i];
     for(int i=1;i<=n;i++)frr[i]+=frr[i-1];

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
