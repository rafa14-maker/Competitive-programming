#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
   multiset<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       v.insert(a);
    }
    int pdx=0,idx=-1;

    for(int k=1;k<=1024;k++)
    {
        bool tr=true;
        for(auto it=v.begin();it!=v.end();it++)
        {
            int pk = *it ^ k;
            if(v.find(pk) == v.end())
            {
                tr=false;
                break;
            }
        }
        if(tr)
        {
            idx=k;
            break;
        }
    }
    cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
