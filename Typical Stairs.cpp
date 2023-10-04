#include<bits/stdc++.h>
using namespace std;

long long mod =  1000000007;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    long long arr[n+5];
    memset(arr,0,sizeof arr);
    arr[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(i-1>=0&&mp[i-1]==0)arr[i]+=arr[i-1];
        arr[i]=arr[i]%mod;
        if(i-2>=0&&mp[i-2]==0)arr[i]+=arr[i-2];
         arr[i]=arr[i]%mod;
    }
    cout<<arr[n]<<endl;
}
