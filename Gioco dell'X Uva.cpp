#include<bits/stdc++.h>
using namespace std;

struct tree
{
    int ik;
    int jk;
    int cnt=0;
};

int n;
int test;

char arr[250][250];
bool vis[250][250];

int mk,mp;

int dx[]={-1,-1,0,0,1,1};
int dy[]={-1,0,-1,1,0,1};

void f(int i,int j)
{
    tree ab;
    ab.ik=i;
    ab.jk=j;
    ab.cnt=1;
    queue<tree>pq;
    pq.push(ab);
    while(!pq.empty())
    {
      //  cout<<i<<" "<<j<<endl;
        tree f=pq.front();
        pq.pop();
        if(vis[f.ik][f.jk])continue;
        vis[f.ik][f.jk]=true;
        int ck=f.ik;
        int rk=f.jk;
        if(arr[ck][rk]=='b'&&ck==n-1)
        {
            mp=min(mp,f.cnt);
        }
        if(arr[ck][rk]=='w'&&rk==n-1)
        {
            mk=min(mk,f.cnt);
        }
        int a,b,c,d;
        a=f.ik;
        b=f.jk;
        c=a;
        d=b;
        for(int k=0;k<6;k++)
        {
         //   cout<<a<<" "<<b<<endl;
            a+=dx[k];
            b+=dy[k];
            if(a>=0&&a<n&&b>=0&&b<n&&arr[a][b]==arr[c][d])
            {
               // cout<<mp<<" "<<mk<<endl;
                tree nw;
                nw.ik=a;
                nw.jk=b;
                nw.cnt=f.cnt+1;
                pq.push(nw);
            }
            a=c;
            b=d;
        }
    }
}

void solve()
{
    mk=1e9,mp=1e9;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]=='w')
        {
           //   cout<<"opp"<<endl;
            memset(vis,false,sizeof vis);
            f(i,0);
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[0][j]=='b')
        {
         //   cout<<"opp"<<endl;
            memset(vis,false,sizeof vis);
            f(0,j);
        }
    }
    //cout<<mp<<" "<<mk<<endl;
    cout<<++test<<" ";
    if(mp>mk)cout<<"W"<<"\n";
    else cout<<"B"<<"\n";
}

int main()
{
   while(1)
   {
       cin>>n;
       if(n==0)break;
       solve();
   }
}
