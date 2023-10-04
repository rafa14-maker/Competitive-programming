#include<bits/stdc++.h>
using namespace std;
using ll =  long long ;

int main()
{
    int n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)arr[i]+=arr[i-1];
    }
    ll k;
    cin>>k;

    ll idx = k/arr[n-1];

    k -= arr[n-1]*idx;

    idx = idx*n;

   // cout<<idx<<" "<<k<<endl;

    for(int i=0;i<n;i++)
    {
        if(k<0)break;
        k-=arr[i];
         idx++;
    }


    cout<<idx<<endl;
}
