#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+5][n+5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int counter=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='.')
            {
                counter=0;
               // cout<<i<<" "<<j<<endl;
                if(arr[i-1][j]=='.'&&i-1>=0)
                {
                  counter++;
                }
                if(arr[i+1][j]=='.'&&i+1<n)
                {
                   counter++;
                }
                if(arr[i][j-1]=='.'&&j-1>=0)
                {
                   counter++;
                }
                if(arr[i][j+1]=='.'&&j+1<n)
                {
                  counter++;
                }
                if(counter==4)
                {
                    arr[i][j]='0';
                    arr[i+1][j]='0';
                    arr[i-1][j]='0';
                    arr[i][j-1]='0';
                    arr[i][j+1]='0';
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='.')
            {
             //   cout<<i<<" "<<j;
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

}
