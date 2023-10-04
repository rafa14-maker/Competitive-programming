#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;

    int m=arr.size(),n=frr.size();
    int t[m+5][n+5];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
            else if(arr[i-1]==frr[j-1])
            {
                t[i][j]=t[i-1][j-1]+1;
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
   /* for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int a=m,b=n;

    while(m>=0&&n>=0)
    {
        if(t[m-1][n]==t[m][n-1])
        {
            cout<<arr[m-1]<<" ";
            m--;
            n--;
        }
        else if(t[m][n]==t[m-1][n])
        {
            m--;
        }
        else
        {
            n--;
        }
    }
}
