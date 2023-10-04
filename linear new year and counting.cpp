#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[505][505];

    int n;
    cin>>n;

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
            if(arr[i][j]=='X'&&arr[i][j]==arr[i-1][j-1]&&arr[i+1][j+1]==arr[i][j]&&arr[i][j]==arr[i+1][j-1]&&arr[i][j]==arr[i-1][j+1])
            {
                counter++;


            }
        }
    }
    cout<<counter<<endl;
}
