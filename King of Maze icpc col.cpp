#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;

int n,m,q;
char arr[100][100];
char frr[100][100];
int krr[100][100];
int prr[55][55];
int s,t;
int e,d,test;
vector<pair<int,int> >wall;

int dijk()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)krr[i][j]=N;
    }

    priority_queue<pair<int,pair<int,int> > >pq;
    pq.push(make_pair(0,make_pair(s,t)));
    krr[s][t]=0;

    while(!pq.empty())
    {
        pair<int,pair<int,int> >f = pq.top();
        pq.pop();
        int d = f.first;
        int i = f.second.first;
        int j = f.second.second;

    //    cout<<i<<" "<<j<<endl;

        if(i-1>=0&&arr[i-1][j]=='.'&&krr[i-1][j]>krr[i][j]+1)
        {
            krr[i-1][j] = krr[i][j]+1;
            pq.push(make_pair(krr[i-1][j],make_pair(i-1,j)));
        }

        if(i+1<n&&arr[i+1][j]=='.'&&krr[i+1][j]>krr[i][j]+1)
        {
            krr[i+1][j] = krr[i][j]+1;
            pq.push(make_pair(krr[i+1][j],make_pair(i+1,j)));
        }

        if(j-1>=0&&arr[i][j-1]=='.'&&krr[i][j-1]>krr[i][j]+1)
        {
            krr[i][j-1] = krr[i][j]+1;
            pq.push(make_pair(krr[i][j-1],make_pair(i,j-1)));
        }

        if(j+1<m&&arr[i][j+1]=='.'&&krr[i][j+1]>krr[i][j]+1)
        {
            krr[i][j+1] = krr[i][j]+1;
            pq.push(make_pair(krr[i][j+1],make_pair(i,j+1)));
        }
    }

   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<krr[i][j]<<" ";
        cout<<endl;
    }*/

    return krr[e][d];
}

void solve()
{
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&q);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='E')
            {
                arr[i][j]='.';
                e=i;
                d=j;
            }
             if(arr[i][j]=='?')
            {
                wall.push_back(make_pair(i,j));
                arr[i][j]='.';
            }
        }
    }

   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<arr[i][j]<<" ";
        cout<<endl;
    }*/

    //int q;
    //cin>>q;

    printf("Case %d:\n",++test);

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        s=a,t=b;
        int kp= dijk();
        //cout<<kp<<endl;
         bool tr= true;
         for(int i=0;i<wall.size();i++)
         {
             int ik = wall[i].first;
             int jk = wall[i].second;
             arr[ik][jk]='#';
             int pk=dijk();
            // cout<<pk<<endl;
             if(kp!=pk)tr=false;
         }
         for(int i=0;i<wall.size();i++)
         {
             int ik = wall[i].first;
             int jk = wall[i].second;
             arr[ik][jk]='.';
         }

        if(tr)cout<<kp<<endl;
        else cout<<-1<<endl;

    }

}

int main()
{
    int qk;
    scanf("%d",&qk);
    while(qk--)solve();
}
