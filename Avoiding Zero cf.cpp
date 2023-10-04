#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[150]={0};
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        //frr[arr[i]+50]++;
    }
    if(sum==0)
    {
        cout<<"NO"<<endl;
        return ;
    }
    else
    {
        cout<<"YES"<<endl;
            vector<int>pl,mi;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<=0)mi.push_back(arr[i]);
                else pl.push_back(arr[i]);
            }
            sort(pl.begin(),pl.end());
             sort(mi.begin(),mi.end());
             reverse(mi.begin(),mi.end());
            if(pl>mi)
            {
                for(int i=0;i<pl.size();i++)cout<<pl[i]<<" ";
                for(int i=0;i<mi.size();i++)cout<<mi[i]<<" ";
            }
            else
            {
                 //for(int i=0;i<pl.size();i++)cout<<pl[i]<<" ";
                for(int i=0;i<mi.size();i++)cout<<mi[i]<<" ";
                for(int i=0;i<pl.size();i++)cout<<pl[i]<<" ";
            }
            cout<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
