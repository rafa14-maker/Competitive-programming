#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    for(int t=1;t<=q;t++)
    {
        int n,m;
        cin>>n>>m;
        long long arr[1005][1005];
        for(int i=0;i<m;i++)
        {
            cin>>arr[0][i];
        }
        for(int j=0;j<n;j++)
        {
            arr[j][0]=arr[0][0];
        }

       for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                arr[i][j]=arr[i-1][j] ^ arr[i][j-1];
            }
        }

        long long g=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                g=max(g,arr[i][j]);
            }
        }
        printf("Case %d: %ld\n",t,g);
    }
}
