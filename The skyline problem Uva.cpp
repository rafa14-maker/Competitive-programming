#include<bits/stdc++.h>
using namespace std;

int frr[10005];

void solve()
{
    int l,r,m;
    int idxk=0;
    while(scanf("%d %d %d",&l,&m,&r)!=EOF)
    {
       // if(l==0)break;
        for(int i=l;i<r;i++)frr[i]=max(frr[i],m);
        idxk=max(idxk,r);
    }

  // for(int i=0;i<=30;i++)cout<<frr[i]<<" ";cout<<endl;

    vector<int>v;
    int idx=-1;
    for(int i=1;i<=idxk;i++)
    {
        if(frr[i]==0&&idx==-1)continue;
        if(frr[i]==idx)continue;
        if(frr[i]!=idx)
        {
            if(idx==-1)
            {
                v.push_back(i);
                v.push_back(frr[i]);
                idx=frr[i];
            }
            else
            {
               // v.push_back(i-1);
            v.push_back(i);
                v.push_back(frr[i]);
                idx=frr[i];
            }
        }
    }
    for(int i=0;i<v.size()-1;i++)cout<<v[i]<<" ";
    cout<<"0"<<endl;
}

int main()
{
    solve();
}
