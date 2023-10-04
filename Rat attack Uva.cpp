#include<bits/stdc++.h>
using namespace std;

int frr[1030][1030];

void solve()
{
    int d;
    cin>>d;
    fill(&frr[0][0],&frr[1025][1025],0);
    int k;
    cin>>k;
    int cnt=0,idx1=0,idx2=0;
    while(k--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=max(0,a-d);i<=min(a+d,1025);i++)
        {
            for(int j=max(0,b-d);j<=min(b+d,1025);j++)
            {
                frr[i][j]+=c;

            }
        }
    }
    for(int i=0;i<1024;i++)
    {
        for(int j=0;j<1024;j++)
        {
            if(frr[i][j]>cnt)
            {
                cnt=frr[i][j];
                idx1=i;
                idx2=j;
            }
        }
    }
    printf("%d %d %d\n",idx1,idx2,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
       // if(q)cout<<endl;
    }
}
