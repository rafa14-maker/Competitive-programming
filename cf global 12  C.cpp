#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    char arr[n+5][n+5];

     int cnt=0;

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)cin>>arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j+1<n&&j-1>=0&&arr[i][j]==arr[i][j-1]&&arr[i][j]==arr[i][j+1])
            {
                arr[i][j]='O';
            }
        }
    }

    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]!='.'&&arr[i][j]!='O'&&i+1<n&&i-1>=0&&arr[i][j]==arr[i-1][j]&&arr[i][j]==arr[i+1][j])
            {
                arr[i][j]='O';
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<arr[i][j];
        cout<<endl;
    }



}

int main()
{
     int q;cin>>q;while(q--)solve();
   // solve();
}

