#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k=1000,i,p;
    cin>>n>>m;
    int arr[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);

    n--;

    m-=n;

    while(m--)
    {
        k=min(k,arr[n+m]-arr[m]);
    }
    cout<<k<<endl;
}
