#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+5;
int arr[mx];

void build_tree(int idx,int value)
{
    if(arr[idx]==-1)
    {
        arr[idx]=value;
        return ;
    }
    if(arr[idx]<value)
    {
        build_tree(idx*2+1,value);
    }
    else build_tree(idx*2,value);
}

void post_order(int idx)
{
    if(arr[idx]==-1)return ;
    post_order(idx*2);
    post_order(idx*2+1);
    printf("%d\n",arr[idx]);
}

void solve()
{
    memset(arr,-1,sizeof arr);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        build_tree(1,n);
    }
    post_order(1);
}

int main()
{
    solve();
}
