#include<bits/stdc++.h>
using namespace std;

char arr[205][205];
char frr[205][205];
char krr[205][205];

int n;

void rot()
{
    int idx=0,pdx=0;
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            krr[i][j]=arr[idx][pdx];
            pdx++;
            if(pdx==n)
            {
                pdx=0;
                idx++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=krr[i][j];
        }
    }

   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
        cout<<endl;
    } */

}

bool check()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=frr[i][j])return false;
        }
    }
    return true;
}


void solve()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>frr[i][j];
    }

    for(int i=0;i<5;i++)
    {
        if(check())
        {
            cout<<"Yes"<<endl;
            return ;
        }
        rot();
    }
    cout<<"No"<<endl;
}

int main()
{
    solve();
}
