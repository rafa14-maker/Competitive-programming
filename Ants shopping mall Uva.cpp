#include<bits/stdc++.h>
using namespace std;

int n,m;
char frr[55][55];
int arr[55][55];

void built()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int cnt=1e7;
            int p=j;
            while(p>=0)
            {
                if(frr[i][p]=='0')
                {
                    cnt=min(cnt,j-p);
                    break;
                }
                p--;
            }
            p=j;
            while(p<m)
            {
                if(frr[i][p]=='0')
                {
                    cnt=min(cnt,p-j);
                    break;
                }
                p++;
            }
            arr[i][j]=cnt;
        }
    }
}

bool check()
{
    for(int i=0;i<n;i++)
    {
        bool tr=true;
        for(int j=0;j<m;j++)
        {
            if(frr[i][j]=='0')tr=false;
        }
        if(tr)return false;
    }
    return true;
}

void solve(int test)
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>frr[i][j];
    }

    printf("Case %d: ",test);

    if(!check())
    {
        cout<<"-1"<<endl;
        return;
    }

    built();

    int sum=1e7;

    for(int j=0;j<m;j++)
    {
        int k=0;
        for(int i=0;i<n;i++)
        {
            k+=arr[i][j];
        }
        sum=min(sum,k);
    }

    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
