#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    bool tr=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i!=0&&arr[i]!=arr[i-1])tr=true;
    }
    if(!tr)
    {
        cout<<"-1"<<endl;
        return ;
    }
    long long idx=-1,sum=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sum)
        {
            sum=arr[i];
            idx=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sum)
        {
            if(i-1>=0&&arr[i-1]+1==arr[i])
            {
                idx=i;
            }
            else if(i+1<n&&arr[i+1]+1==arr[i])
            {
                idx=i;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sum)
        {
            if(i-1>=0&&arr[i-1]+1==arr[i]&&i+1<n&&arr[i]==arr[i+1])
            {
                idx=i;
            }
            else if(i+1<n&&arr[i+1]+1==arr[i]&&i-1>=0&&arr[i]==arr[i-1])
            {
                idx=i;
            }

        }
    }
    cout<<idx+1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

