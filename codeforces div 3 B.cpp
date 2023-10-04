#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+5;

void solve()
{
    int frr[N]={0};
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[arr[i]]++;
    }
    int idx=-1,px=1e9;
    for(int i=0;i<n;i++)
    {
        if(frr[arr[i]]==1)
        {
            if(idx==-1||px>arr[i])
            {
                idx=i+1;
                px=arr[i];
            }
        }
    }
    cout<<idx<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}

