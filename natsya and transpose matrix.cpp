#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,m;
    cin>>n>>m;
    long long arr[n+2][m+2],frr[n+2][m+2];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>frr[i][j];
        }
    }

long long  counter=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[j][i]==frr[i][j])counter++;
            else  if(arr[i][j]==frr[i][j])counter++;
        }
    }
   // cout<<counter<<endl;
    if(counter==n*m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
