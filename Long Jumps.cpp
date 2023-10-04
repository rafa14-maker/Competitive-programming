#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(arr[i],mx);
            }


    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        long long k=n-(i+1);
        if(k%arr[i]==0)
        {
            k+=mx;
        }
        else
        {
            k/=arr[i];
            k++;
            k*=arr[i];
        }
        cout<<k<<endl;
        cnt=max(k,cnt);
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
