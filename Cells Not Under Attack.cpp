#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    int frr[n+5]={0};
    int arr[n+5]={0};
    long long counter=0,flag=0;
    for(int i=0;i<m;i++)
    {
        long long a,b;
        cin>>a>>b;
        if(arr[a]==0)arr[a]=1,counter++;
        if(frr[b]==0)frr[b]=1,flag++;
        cout<<(n-counter)*(n-flag)<<endl;
    }
}
