#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

vector<pair<int,int> >adj[N];
int frr[N];
int arr[N];

int n,m,mx=1e8+7;

struct node
{
    int id;
    int cost;
    int mask;
};

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}


bool opp(int mk)
{
    int cnt=0;
    for(int i=1;i<=8;i++)
    {
        if(Check(mk,i))cnt++;
    }
   return cnt;
}


void solve()
{
    cin>>n>>m;

    for(int i=0;i<N;i++)arr[i]= mx;

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }

    for(int i=1;i<=7;i++)
    {
        cin>>frr[i];
    }

    queue<node>q;


    arr[1]=0;

    node idx;
    idx.id = 1;
    idx.cost = 0;

    int ma=0;

    for(int i=1;i<=8;i++)
    {
        if(frr[i]==1)
        {
            ma = Set(ma,i);
        }
    }

    idx.mask = ma;

    q.push(idx);

    while(!q.empty())
    {
        node f  = q.front();
        q.pop();
        int u = f.id;
        int co = f.cost;
        int mak = f.mask;

      // cout<<u<<endl;

        if(mak==254)
        {
        //    cout<<mak<<" "<<co<<endl;
            mx = min(mx,co);
         //   continue;
        }

    //  cout<<mak<<" "<<" "<<co<<endl;

        for(int i=0;i<adj[u].size();i++)
        {
            pair<int,int>vk = adj[u][i];

            int v = vk.first;
            int ko = vk.second;

            bool tr=false;

                 for(int j=1;j<=7;j++)
                 {
                     if(frr[j]==v)
                     {
                         if(!Check(mak,j))tr=true;
                     }
                 }

             if(arr[v]>arr[u]+ko)
             {
                 arr[v] = arr[u]+ko;
                 int mnk = mak;
                 for(int j=1;j<=7;j++)
                 {
                     if(frr[j]==v)mnk = Set(mnk,j);
                 }
                 node kp ;
                 kp.id = v;
                 kp.cost =arr[v];
                 kp.mask = mnk;
                 q.push(kp);
            }

            if(tr)
            {
                 int mnk = mak;
                 for(int j=1;j<=7;j++)
                 {
                     if(frr[j]==v)mnk = Set(mnk,j);
                 }
                 node kp ;
                 kp.id = v;
                 kp.cost =co+ko;
                 kp.mask = mnk;
                 q.push(kp);
            }


        }
    }

    cout<<mx<<endl;

}

int main()
{
    solve();
}

/*

7 8
1 2 1
1 3 2
2 5 1
3 4 2
5 7 1
4 6 2
7 6 2
7 6 2
3 3 3 4 4 4 6

*/
