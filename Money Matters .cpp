#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;
int money[N];
int root[N];


int findroot(int n)
{
    if(root[n]==n)return n;
    return root[n] = findroot(root[n]);
}

void uni(int a,int b)
{
    int c = findroot(a);
    int d = findroot(b);

    if(c!=d)
    {
        money[c]+=money[d];
        money[d]=0;
       root[d]=c;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>money[i];
            root[i]=i;
        }
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            uni(a,b);
        }
        int i=0;
        for(;i<n;i++)
        {
            if(money[i]!=0)
            {
                cout<<"IMPOSSIBLE"<<endl;
                break;
            }
        }
        if(i>=n)cout<<"POSSIBLE"<<endl;
    }
}
