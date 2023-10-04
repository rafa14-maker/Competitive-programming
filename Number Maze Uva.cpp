#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+5;

int n,m,s;
int frr[1005][1005];
int arr[1005][1005];

void solve()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>frr[i][j],arr[i][j]=N;
    }

   // for(int i=0;i<=n;i++)for(int j=0;j<=m;j++)arr[i][j]=N;

    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
    pq.push(make_pair(0,make_pair(0,0)));
    arr[0][0]=frr[0][0];

    while(!pq.empty())
    {
        pair<int,pair<int,int> >f=pq.top();
        pq.pop();
        int a=f.second.first;
        int b=f.second.second;
        int d=f.first;
        if(a-1>=0)
        {
            if(arr[a-1][b]>frr[a-1][b]+arr[a][b])
            {
               arr[a-1][b]=frr[a-1][b]+arr[a][b];
               pq.push(make_pair(arr[a-1][b],make_pair(a-1,b)));
            }
        }

        if(a+1<n)
        {
            if(arr[a+1][b]>frr[a+1][b]+arr[a][b])
            {
               arr[a+1][b]=frr[a+1][b]+arr[a][b];
               pq.push(make_pair(arr[a+1][b],make_pair(a+1,b)));
            }
        }

        if(b+1<m)
        {
            if(arr[a][b+1]>frr[a][b+1]+arr[a][b])
            {
               arr[a][b+1]=frr[a][b+1]+arr[a][b];
                 pq.push(make_pair(arr[a][b+1],make_pair(a,b+1)));
            }
        }

        if(b-1>=0)
        {
            if(arr[a][b-1]>frr[a][b-1]+arr[a][b])
            {
               arr[a][b-1]=frr[a][b-1]+arr[a][b];
                 pq.push(make_pair(arr[a][b-1],make_pair(a,b-1)));
            }
        }

    }

    cout<<arr[n-1][m-1]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
