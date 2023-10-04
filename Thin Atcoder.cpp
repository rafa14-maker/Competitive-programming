#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    char arr[n+5][m+5];

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
            cout<<arr[i][j];
        }
        cout<<endl;
         for(int j=0;j<m;j++)
        {
           cout<<arr[i][j];
        }
        cout<<endl;
    }
}
