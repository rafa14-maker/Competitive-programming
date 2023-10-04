#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    int n,m,k;
    cin>>n>>m>>k;

    char arr[n+5][m+5];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
    int frr[n+5][m+5];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)frr[i][j]=1;
    int counter=0;

    if(n==1&&m==1&&k==1)
    {
        if(arr[0][0]=='.'){
        cout<<1<<endl;}
        else cout<<0<<endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='.'&&j-1>=0&&arr[i][j-1]==arr[i][j])
            {
                frr[i][j]+=frr[i][j-1];
               // cout<<i<<" "<<j<<" " <<frr[i][j]<<endl;
                if(frr[i][j]>=k)counter++;
            }
        }
    }

  //  int prr[n+5][m+5]={1};
  for(int i=0;i<n;i++)for(int j=0;j<m;j++)frr[i][j]=1;

    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]=='.'&&i-1>=0&&arr[i-1][j]==arr[i][j])
            {
                frr[i][j]+=frr[i-1][j];
                if(frr[i][j]>=k)counter++;
            }
        }
    }

    cout<<counter<<endl;
}
