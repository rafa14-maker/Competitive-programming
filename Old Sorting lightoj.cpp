#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int idx=1,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=idx)
        {
            cnt++;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==idx)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
        idx++;
    }
    printf("Case %d: %d\n",++test,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
