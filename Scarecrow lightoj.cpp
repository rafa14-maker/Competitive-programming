#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n;
    cin>>n;
     string arr;
     cin>>arr;
   // for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0,idx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='.')
        {
            idx++;
            i+=2;
        }
    }
    printf("Case %d: %d\n",++test,idx);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
