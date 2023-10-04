#include<bits/stdc++.h>
using namespace std;

long long arr[10],frr[10];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        arr[i%5]++;
    }
    for(int i=1;i<=m;i++)
    {
        frr[i%5]++;
    }
    long long sum=0;
    sum+=(arr[0]*frr[0]);
    for(int i=1,j=4;i<5;i++,j--)
    {
        sum+=(arr[i]*frr[j]);
    }
    cout<<sum<<endl;
}
