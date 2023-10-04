#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5][n+5];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
       if(i==1)
       {
           cout<<sqrt((arr[i][2]*arr[i][3])/arr[2][3])<<" ";
       }
       else if(i==2)
       {
           cout<<sqrt((arr[i][1]*arr[i][3])/arr[1][3])<<" ";
       }
       else
       {
           cout<<sqrt((arr[i][1]*arr[i][2])/arr[1][2])<<" ";
       }
    }
}
