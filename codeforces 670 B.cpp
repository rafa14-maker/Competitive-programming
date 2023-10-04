#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==5)
    {
        long long sum=1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum*=a;
        }
        cout<<sum<<endl;
        return ;
    }
    else
    {
        vector<int>mi;
        vector<int>pl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>=0)pl.push_back(a);
            else mi.push_back(a);
        }
        long long mx=-1e18;
        sort(pl.begin(),pl.end());
        reverse(pl.begin(),pl.end());
        sort(mi.begin(),mi.end());

        int len=pl.size(),lenk=mi.size();

        if(pl.size()>=5)
        {
            long long sum=1;
            for(int i=0;i<5;i++)sum*=pl[i];
            mx=max(mx,sum);
        }

        if(mi.size()>=2&&pl.size()>=3)
        {
            long long sum=1;
            for(int i=0;i<3;i++)sum*=pl[i];
            for(int i=0;i<2;i++)sum*=mi[i];
            mx=max(mx,sum);
        }

        if(mi.size()>=4&&pl.size()>=1)
        {
            long long sum=1;
            for(int i=0;i<1;i++)sum*=pl[i];
            for(int i=0;i<4;i++)sum*=mi[i];
            mx=max(sum,mx);
        }

       int  idx=5;
        long long sum=1;
        for(int i=0;i<pl.size();i++)
        {
            sum*=pl[i];
            idx--;
            if(idx==0)break;
        }

        for(int i=mi.size()-1;i>=0;i--)
        {
            if(idx>0)
            {
                sum*=mi[i];
                idx--;
            }
        }
        mx=max(sum,mx);

        cout<<mx<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}
