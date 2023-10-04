#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int c=q;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        arr[i]=k;
    }
    while(q--)
    {
        int p;
        cin>>p;
        arr[p]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>c)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
