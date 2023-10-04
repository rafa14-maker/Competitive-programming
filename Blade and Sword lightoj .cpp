#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,m;
char arr[205][205];
int frr[205][205];
queue<pair<int,int> >pq;
vector<pair<int,int> >v;
int test;


void solve()
{
   // cout<<"yes"<<endl;
   v.clear();
    cin>>n>>m;
    int k1,k2;
    int ans = 1e5+5;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            frr[i][j] = 1e5+5;
            if(arr[i][j]=='P')frr[i][j] = 0,pq.push(make_pair(i,j));
            if(arr[i][j]=='D')k1 = i,k2 =j;
            if(arr[i][j]=='*')v.push_back(make_pair(i,j));
        }
    }

    bool tr = false;

    while(!pq.empty())
    {
        pair<int,int>f = pq.front();
        pq.pop();
        int i = f.first;
        int j = f.second;
        if(arr[i][j]=='*')
        {
            continue;
        }
         if(i+1<n&&arr[i+1][j]!='#'&&frr[i+1][j]>frr[i][j]+1)frr[i+1][j]=frr[i][j]+1,   pq.push(make_pair(i+1,j));
         if(j+1<m&&arr[i][j+1]!='#'&&frr[i][j+1]>frr[i][j]+1)frr[i][j+1]=frr[i][j]+1,   pq.push(make_pair(i,j+1));
         if(i-1>=0&&arr[i-1][j]!='#'&&frr[i-1][j]>frr[i][j]+1)frr[i-1][j]=frr[i][j]+1,   pq.push(make_pair(i-1,j));
         if(j-1>=0&&arr[i][j-1]!='#'&&frr[i][j-1]>frr[i][j]+1)frr[i][j-1]=frr[i][j]+1,   pq.push(make_pair(i,j-1));
    }

    ans = min(ans, frr[k1][k2]);
    frr[k1][k2] = 0;
    pq.push(make_pair(k1,k2));

    vector<int>pl;

    for(int i=0;i<v.size();i++)
    {
        int a = v[i].first;
        int b = v[i].second;
       pl.push_back(frr[a][b]);
        frr[a][b] = 1e5+5;
    }

     while(!pq.empty())
    {
        pair<int,int>f = pq.front();
        pq.pop();
        int i = f.first;
        int j = f.second;
        if(arr[i][j]=='*')
        {
            continue;
        }
         if(i+1<n&&arr[i+1][j]!='#'&&frr[i+1][j]>frr[i][j]+1)frr[i+1][j]=frr[i][j]+1,   pq.push(make_pair(i+1,j));
         if(j+1<m&&arr[i][j+1]!='#'&&frr[i][j+1]>frr[i][j]+1)frr[i][j+1]=frr[i][j]+1,   pq.push(make_pair(i,j+1));
         if(i-1>=0&&arr[i-1][j]!='#'&&frr[i-1][j]>frr[i][j]+1)frr[i-1][j]=frr[i][j]+1,   pq.push(make_pair(i-1,j));
         if(j-1>=0&&arr[i][j-1]!='#'&&frr[i][j-1]>frr[i][j]+1)frr[i][j-1]=frr[i][j]+1,   pq.push(make_pair(i,j-1));
    }

    vector<int>di;

     for(int i=0;i<v.size();i++)
    {
        int a = v[i].first;
        int b = v[i].second;
          di.push_back(frr[a][b]);
    }

    for(int i=0;i<pl.size();i++)
    {
        for(int j=0;j<di.size();j++)
        {
         //   cout<<i<<" "<<j<<" "<< pl[i] <<" "<< di[j]<<endl;
           if(i==j)
           {
               if(v.size()>1)ans = min(ans,pl[i]+di[j]+2);
           }
           else ans = min(ans,pl[i]+di[j]+1);
        }
    }


    if(ans >= 1e5+5)printf("Case %d: impossible\n",++test);
    else printf("Case %d: %d\n",++test,ans);

}


int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
5 10
##########
#...#....#
#...#....#
#.*P#D.*.#
##########

*/

