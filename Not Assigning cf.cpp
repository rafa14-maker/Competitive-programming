#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;

bool prime[N];
vector<int>adj[N];
vector<int>edge[N];
vector<int>pr;
vector<pair<int,int> >idx;
bool vis[N];
int n;
int frr[N];
int cnt ;


void cal()
{
    for(int i=1;i<=n;i++)edge[i].clear(),frr[i]=0,vis[i] = false;
    cnt = 0;
   // vk.clear();
}

bool dfs(int n)
{
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        if(frr[f]==0)
        {
            while(vis[pr[cnt]]){cnt++;}
            if(cnt == pr.size())
            {
                return false;
            }
            frr[f] = pr[cnt];
            vis[frr[f]]=true;
        }
        int op = frr[f];

       // cout<<frr[f]<<endl;

        for(int i=0;i<edge[f].size();i++)
        {
            int v = edge[f][i];
            cout<<f<<" "<<v<<" "<<op<<" "<<frr[v]<<endl;
            if(frr[v] == 0)
            {
                bool tr = true;
                for(int j=0;j<adj[op].size();j++)
                {
                    int ek = adj[op][j];
                    if(!vis[ek])
                    {
                        tr = false;
                        frr[v] = ek;
                        vis[ek] = true;
                        break;
                    }
                }
            //    cout<<frr[v]<<endl;
                if(tr)return false;

                q.push(v);
            }
            else
            {
                int po = frr[v]+frr[f];
                if(!prime[po])return false;
            }
        }

    }
    return true;

}


void seive(){
    memset(prime,true,sizeof(prime));

    vector<int>v;
    for(int p=2;p*p<N;p++)
    {
        if(prime[p]==true)
        {
            pr.push_back(p);
            for(int i=p*2;i<=N;i+=p)
            {
                prime[i]=false;
            }
        }
    }

    for(int i=0;i<pr.size();i++)
    {
        if(i+1<pr.size())
        {
            int k = pr[i+1]-pr[i];
            if(prime[k]&&(k>1))
            {
                adj[k].push_back(pr[i]);
            }
        }
    }


}



void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   cal();
   int arr[n+5][2];

   for(int i=0;i<n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       edge[a].push_back(b);
       edge[b].push_back(a);
    //   cin>>arr[i][0]>>arr[]
    //  frr[b]++;
   }

 // for(int i=0;i<vk.size();i++)cout<<vk[i]<<" ";cout<<endl;

     memset(vis,false,sizeof vis);
   cnt = 0;


   for(int i=1;i<=n;i++)
   {
     if(!dfs(i))
     {
         cout<<-1<<endl;
      //   return ;
     }
   }

   for(int i=1;i<=n;i++)cout<<frr[i]<<" ";cout<<endl;



}

int main()
{
    seive();
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
4
1 3
4 3
2 1

*/

