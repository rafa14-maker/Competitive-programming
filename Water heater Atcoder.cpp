#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+5;

int arr[N];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a]+=c;
        arr[b]-=c;
    }
    bool tr=true;
    for(int i=1;i<=N;i++)
    {
        arr[i]+=arr[i-1];
        if(arr[i]>k)tr=false;
    }
    if(tr)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
