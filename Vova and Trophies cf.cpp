#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[n+5];
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
        {
            tr=false;
            arr[i]=1;
        }
        else arr[i]=0;
    }
    if(tr)
    {
        cout<<0<<endl;
        return ;
    }

    for(int i=0;i<n;i++)
    {
        if(i+1<n&&arr[i]>0&&arr[i+1]>0)
        {
            arr[i+1]=arr[i]+1;
        }
    }

    for(int i=n-1;i>0;i--)
    {
        if(arr[i-1]>0&&arr[i]>0)
        {
            arr[i-1]=arr[i];
        }
    }

    multiset<int>mt;

    for(int i=0;i<n;i++)
    {
        if(i==0&&arr[i]!=0)mt.insert(arr[i]);
        else
        {
            if(arr[i]!=0&&arr[i]!=arr[i-1])mt.insert(arr[i]);
        }
    }

    if(mt.size()==1)
    {
        auto it = mt.begin();
        cout<<*it<<endl;
        return ;
    }

   else if(mt.size()==2)
    {
        int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]);
        if(arr[i]==0)
        {
            if(i-1>=0&&i+1<n)
            {
                ans=max(ans,arr[i-1]+arr[i+1]);
            }
            if(i-1>=0)
            {
                ans=max(ans,arr[i-1]+1);
            }
            if(i+1<n)
            {
                ans=max(ans,arr[i+1]+1);
            }
        }
    }
    //cout<<"YES ";
        cout<<ans<<endl;

        return;
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]);
        if(arr[i]==0)
        {
            if(i-1>=0&&i+1<n)
            {
                ans=max(ans,arr[i-1]+arr[i+1]+1);
            }
            if(i-1>=0)
            {
                ans=max(ans,arr[i-1]+1);
            }
            if(i+1<n)
            {
                ans=max(ans,arr[i+1]+1);
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}
