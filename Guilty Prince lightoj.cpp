#include<bits/stdc++.h>
using namespace std;

int test,n,m;
char arr[25][25];
int s,t;

int dfs()
{
    queue<pair<int,int> >pq;
    pq.push(make_pair(s,t));

    while(!pq.empty())
    {
        pair<int,int>u = pq.front();
        pq.pop();
        int i = u.first;
        int j = u.second;
        if(arr[i][j]=='#')continue;
        arr[i][j]='0';
        if(i+1<n&&arr[i+1][j]=='.')pq.push(make_pair(i+1,j));
        if(j+1<m&&arr[i][j+1]=='.')pq.push(make_pair(i,j+1));
        if(i-1>=0&&arr[i-1][j]=='.')pq.push(make_pair(i-1,j));
        if(j-1>=0&&arr[i][j-1]=='.')pq.push(make_pair(i,j-1));
    }

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          //  cout<<arr[i][j]<<" ";
            if(arr[i][j]=='0')cnt++;
        }
       // cout<<endl;
    }
    return cnt;
}

void solve()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='@')
            {
               // arr[i][j]='.';
                s=i;
                t=j;
            }
        }
    }
    printf("Case %d: %d\n",++test,dfs());
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
