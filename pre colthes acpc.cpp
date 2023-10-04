 #include<bits/stdc++.h>
using namespace std;

vector<int>adj[5000];
using ll = long long;

int main()
{
    int n,m;

    cin>>n>>m;

    ll arr[n+5];

    for(int i=1;i<=n;i++)cin>>arr[i];

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


    ll sum=1e12;

    for(int i=1;i<=n;i++)
    {
     for(int j=0;j<adj[i].size();j++)
     {
         int p=adj[i][j];
         for(int k=0;k<adj[p].size();k++)
         {
            int q=adj[p][k];
            for(int f=0;f<adj[q].size();f++){
                    if(adj[q][f]==i){

               //  int c=adj[p][k];
               //    cout<<i<<" "<<p<<" "<<q<<endl;
                 if(q==i||q==p||p==i)continue;
               //  cout<<i<<" "<<p<<" "<<c<<endl;
                 sum=min(sum,arr[i]+arr[p]+arr[q]);
            }
            }
         }
     }
    }
    if(sum==1e12) cout<<-1<<endl;
    else cout<<sum<<endl;
}

