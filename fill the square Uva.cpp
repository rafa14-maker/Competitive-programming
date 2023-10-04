#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
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
            if(arr[i][j]=='.')
            {
                for(char a='A';a<='Z';a++)
                {
                    bool tr=true;
                    if(i-1>=0)if(arr[i-1][j]==a)tr=false;
                    if(j-1>=0)if(arr[i][j-1]==a)tr=false;
                    if(i+1<n)if(arr[i+1][j]==a)tr=false;
                    if(j+1<n)if(arr[i][j+1]==a)tr=false;
                    if(tr)
                    {
                        arr[i][j]=a;
                        break;
                    }
                }
            }
        }
    }
    printf("Case %d:\n",++test);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<arr[i][j];
        cout<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
