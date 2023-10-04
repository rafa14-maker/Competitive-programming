#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    char arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<min(n,k);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]=='1')
            {
                if(j-1>=0&&arr[j-1]=='0')
                {
                   if(j-2<=0)
                   {
                       if(arr[j-2]=='0')arr[j-1]='1';
                   }
                   else arr[j-1]='1';
                }
                else if(j+1<n&&arr[j+1]=='0')
                {
                    if(j+2<n)
                   {
                       if(arr[j+2]=='0')arr[j+1]='1';
                   }
                   else arr[j+1]='1';
                   j++;
                }
            }
        }
    }

    for(int i=0;i<n;i++)cout<<arr[i];
    cout<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
