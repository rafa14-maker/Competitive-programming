#include<bits/stdc++.h>
using namespace std;
using ll=long long;

const int N =1e7+5;

ll arr[N];

int main()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            arr[j]++;
        }
    }
    ll k;
    cin>>k;
    ll sum=0;
    for(int i=1;i<=k;i++)
    {
        sum+=(i*arr[i]);
    }
    cout<<sum<<endl;
}
