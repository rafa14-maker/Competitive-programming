#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
   vector<pair<int,int> >pl;
   vector<pair<int,int> >mi;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0)
        {
            mi.push_back(make_pair(i,a));
        }
        else if(a>0)
        {
            pl.push_back(make_pair(i,a));
        }
    }
   int k=0,j;
  for(int i=0;i<pl.size();i++)
    {
        if(pl[i].second<=0)continue;
        for( j=0;j<mi.size();j++)
        {
             if(mi[j].second>=0)continue;
           else  if(mi[j].first>pl[i].first)
            {
                int k=mi[j].second*(-1);
                int mn=min(k,pl[i].second);
                pl[i].second-=mn;
                mi[j].second+=mn;
                if(pl[i].second==0)break;
            }
        }
    k=j;
    }
    long long cnt=0;


  //  for(int i=0;i<mi.size();i++)cout<<mi[i].second<<" ";cout<<endl;
   //  for(int i=0;i<pl.size();i++)cout<<pl[i].second<<" ";cout<<endl;



   for(int i=0;i<mi.size();i++)
    {
        int a=0;
       if(mi[i].second<0)  a=mi[i].second*(-1);
        cnt+=a;
    }

    for(int i=0;i<pl.size();i++)
    {
       if(pl[i].second>0) cnt+=pl[i].second;
    }

    cout<<cnt/2<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

