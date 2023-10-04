#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string as,bs;
    cin>>as>>bs;

    vector<pair<string,int> >va;
    vector<pair<string,int> >vb;

    for(int i=0;i<as.size();i++)
    {
        string pk;
        pk+=as[i];
        for(int j=i;j<as.size();j++)
        {
         if(i!=j)   pk+=as[j];
       // cout<<pk<<endl;
            int val = i+(as.size()-j-1);
         //   cout<<pk<<" "<<val<<endl;
            va.push_back(make_pair(pk,val));
        }
    }

    for(int i=0;i<bs.size();i++)
    {
        string pk;
        pk+=bs[i];
        for(int j=i;j<bs.size();j++)
        {
            if(i!=j)    pk+=bs[j];
          //  cout<<pk<<endl;
            int val = i+(bs.size()-j-1);
           // cout<<pk<<" "<<val<<endl;
            vb.push_back(make_pair(pk,val));

        }
    }

    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());

    int  mn = 1e8+5;

    for(int i=0;i<va.size();i++)
    {
        int l=0,r=vb.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(vb[mid].first==va[i].first)
            {
                mn=min(mn,vb[mid].second+va[i].second);
                break;
            }
            else if(vb[mid].first>va[i].first)r=mid-1;
            else l=mid+1;
        }
    }
   if(mn==1e8+5)cout<<as.size()+bs.size()<<endl;
   else cout<<mn<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
hello
helo

*/
