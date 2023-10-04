#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+5;

void solve()
{
    string s;
    cin>>s;

    int n,m;
    cin>>n>>m;

    int arr[105][105];
    int frr[105][105];
    int krr[105][105];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            frr[i][j]=1;
            krr[i][j]=1;
        }
    }

    queue<pair<int,int> >pq;
    pq.push(make_pair(0,0));

    frr[0][0]=1;
    krr[0][0]=1;

    while(!pq.empty())
    {
        pair<int,int>f = pq.front();
        pq.pop();
        int i = f.first;
        int j = f.second;
        if(i+1<n&&arr[i][j]<arr[i+1][j]&&frr[i][j]+1>frr[i+1][j])
        {
            frr[i+1][j]=frr[i][j]+1;
            pq.push(make_pair(i+1,j));
        }

        if(i-1>=0&&arr[i][j]<arr[i-1][j]&&frr[i][j]+1>frr[i-1][j])
        {
            frr[i-1][j]=frr[i][j]+1;
            pq.push(make_pair(i-1,j));
        }

        if(j+1<m&&arr[i][j]<arr[i][j+1]&&frr[i][j]+1>frr[i][j+1])
        {
            frr[i][j+1]=frr[i][j]+1;
            pq.push(make_pair(i,j+1));
        }
        if(j-1>=0&&arr[i][j]<arr[i][j-1]&&frr[i][j]+1>frr[i][j-1])
        {
            frr[i][j-1]=frr[i][j]+1;
            pq.push(make_pair(i,j-1));
        }

        if(i+1<n&&arr[i][j]>arr[i+1][j]&&krr[i][j]+1>krr[i+1][j])
        {
            krr[i+1][j]=krr[i][j]+1;
            pq.push(make_pair(i+1,j));
        }

        if(i-1>=0&&arr[i][j]>arr[i-1][j]&&krr[i][j]+1>krr[i-1][j])
        {
            krr[i-1][j]=krr[i][j]+1;
            pq.push(make_pair(i-1,j));
        }

        if(j+1<m&&arr[i][j]>arr[i][j+1]&&krr[i][j]+1>krr[i][j+1])
        {
            krr[i][j+1]=krr[i][j]+1;
            pq.push(make_pair(i,j+1));
        }
        if(j-1>=0&&arr[i][j]>arr[i][j-1]&&krr[i][j]+1>krr[i][j-1])
        {
            krr[i][j-1]=krr[i][j]+1;
            pq.push(make_pair(i,j-1));
        }



    }

    int mx=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mx=max(mx,frr[i][j]);
            mx=max(mx,krr[i][j]);
        }
    }

    cout<<s<<": "<<mx<<"\n";

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
