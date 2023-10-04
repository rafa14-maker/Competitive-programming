#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='K')
            {
                if(i+1<n)if(arr[i+1][j]=='*')arr[i+1][j]='.';
                if(i+1<n&&j-1>=0)if(arr[i+1][j-1]=='*')arr[i+1][j-1]='.';
                if(i+1<n&&j+1<n)if(arr[i+1][j+1]=='*')arr[i+1][j+1]='.';
                if(j-1>=0)if(arr[i][j-1]=='*')arr[i][j-1]='.';
                if(j+1<n)if(arr[i][j+1]=='*')arr[i][j+1]='.';
                if(i-1>=0&&j-1>=0)if(arr[i-1][j-1]=='*')arr[i-1][j-1]='.';
                if(i-1>=0)if(arr[i-1][j]=='*')arr[i-1][j]='.';
                if(i-1>=0&&j+1<n)if(arr[i-1][j+1]=='*')arr[i-1][j+1]='.';
            }
        }
    }

    int frr[n+5][n+5]={0};
    int counter=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-1>=0&&arr[i-1][j]=='-')frr[i][j]++;
            if(i-1<n&&j+1<n&&arr[i-1][j+1]=='-')frr[i][j]++;
            if(i-1>=0&&j-1>=0&&arr[i-1][j-1]=='-')frr[i][j]++;
        }
    }

    for(int p=3;p>=1;p++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(frr[i][j]==p)
                {
                    if(p==3)
                    if(p==2)
                }
            }
        }
    }


}
