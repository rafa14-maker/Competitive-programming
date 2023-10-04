#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d",&n);

    vector<int>v[n+5];
    int idx = 0;

    for(int i=0;i<n;i++)
    {
        int a;
       scanf("%d",&a);
       vector<int>pdx;
        for(int j=0;j<a;j++)
        {
            int b;
            scanf("%d",&b);
            pdx.push_back(b);
        }

        if(idx == 0)
        {
            for(int j=0;j<pdx.size();j++)
            {
               v[idx].push_back(pdx[j]);
            }
            idx++;
        }
        else
        {
            bool tr = false;

            for(int k=0;k<idx;k++)
            {
                if(v[k].size()==pdx.size())
                {
                    bool kp = true;
                    for(int p=0;p<pdx.size();p++)
                    {
                        if(v[k][p]!=pdx[p])kp = false;
                    }
                    if(kp)tr=true;
                }
            }

            if(!tr)
            {
                 for(int j=0;j<pdx.size();j++)
            {
               v[idx].push_back(pdx[j]);
            }
            idx++;
            }

        }

    }

    cout<<idx<<"\n";

}

int main()
{
    solve();
}
