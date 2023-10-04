#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,h;
    cin>>n>>h>>m;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        arr[i]=h;
    }
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a;i<=b;i++)
        {
            if(arr[i]>c)
            {
                arr[i]=c;
            }
        }
    }

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        sum+=(arr[i]*arr[i]);
    }

    cout<<sum<<endl;
}
