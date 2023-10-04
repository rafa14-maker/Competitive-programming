#include<bits/stdc++.h>
using namespace std;

int arr[100];

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    while(a--)
    {
        int x;
        cin>>x;
        arr[x]=1;
    }
    while(b--)
    {
        int x;
        cin>>x;
        arr[x]=2;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}
