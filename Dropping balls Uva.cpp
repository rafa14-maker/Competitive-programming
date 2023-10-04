#include<bits/stdc++.h>
using namespace std;

const int mx=524289;
const int sz=1048575;
bool tree[sz];
int ans[21][mx];

int stop_pos(int d,int idx,int node)
{
    if(d==idx)return node;
    if(!tree[node])
    {
        tree[node]=true;
        return stop_pos(d+1,idx,node*2+1);
    }
    tree[node]=false;
    return stop_pos(d+1,idx,node*2+2);
}

int main()
{
    int t,d,k;
    for(int i=2;i<21;i++)
    {
        memset(tree,false,sizeof tree);
        for(int j=1;j<mx;j++)
        {
            ans[i][j]=stop_pos(1,i,0)+1;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>d>>k;
        cout<<ans[d][k]<<endl;
    }
    cin>>d;
}
