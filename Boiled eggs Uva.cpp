#include<bits/stdc++.h>
using namespace std;
int test;

void solve()
{
    int n,p,q;
    cin>>n>>p>>q;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mn=0;
    for(int i=0;i<n;i++)
    {
        int sum=0,mv=0;
        for(int j=i;j<n;j++)
        {
            if(sum+arr[j]<=q)
            {
                sum+=arr[j];
                mv++;
                mn=max(mv,mn);
            }
            else break;
        }
    }
    printf("Case %d: %d\n",++test,min(p,mn));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
