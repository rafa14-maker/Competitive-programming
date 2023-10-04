#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        int arr[n+5][n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        for(int i=0;i<n;i++)
        {
            int p=m;
            while(p--)
            {
                if(k-1<=arr[i][0]&&arr[i][0]<=k+1)
                {
                    arr[i][0]=k;
                    break;
                }
                else if(k-1>arr[i][0])
                {
                    arr[i][0]+=1;
                }
                else if(k+1<arr[i][0])
                {
                    arr[i][0]-=1;
                }
            }
        }
        int a=0,b=1e8;
       // for(int i=0;i<n;i++)cout<<arr[i][0]<<" ";cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(arr[i][0]>=l&&arr[i][0]<=r&&arr[i][1]<b)
            {
                a=arr[i][0];
                b=arr[i][1];
            }
        }
       if(b!=1e8) cout<<b<<endl;
       else cout<<-1<<endl;
    }
}
