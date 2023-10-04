#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
     char arr[52][52];
     int frr[52][52];
    for(int i=0;i<52;i++)
    {
        for(int j=0;j<52;j++)
        {
            frr[i][j]=0;
        }
    }

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
            if(arr[i][j]=='W'&&arr[i][j+1]=='L')
            {
               frr[i][j]=1;
            }

        }
    }
    int counter=0;

        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(frr[i][j]==1)
        {
            counter++;
        }
        }
    }

    cout<<counter<<endl;
}
