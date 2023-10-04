#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int frr[n+5]={0};
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        frr[a]=i;
    }
    int counter=0;

    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(frr[arr[i]]>frr[arr[j]])counter++;
        }
    }
    cout<<counter<<endl;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        solve(n);
    }
}
