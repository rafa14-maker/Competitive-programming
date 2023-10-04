#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int arr[n+5]={0};
    arr[0]=0;
    int i;
    for( i=2;;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {

                int tmp=arr[j]+i;
                tmp=(int)sqrt(tmp);
                if(tmp*tmp==arr[j]+i||arr[j]==0)
                {
                    arr[j]=i;
                    break;
                }
        }
        if(j==n)break;
    }
    cout<<i-1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
        solve();
}
