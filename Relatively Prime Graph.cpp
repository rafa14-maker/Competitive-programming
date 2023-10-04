#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int frr[N];


int main()
{
    long long n,m;
    cin>>n>>m;

    vector<pair<int,int> >v;

    for(int i=1;i<=n;i++)
    {
        if(v.size()==m)break;
        for(int j=i+1;j<=n;j++)
        {
            if(i==1)v.push_back(make_pair(i,j)),frr[i]++,frr[j]++;
            else if(__gcd(i,j)==1)v.push_back(make_pair(i,j)),frr[i]++,frr[j]++;
            if(v.size()==m)break;
        }
    }
 //for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

 bool cr = true;

 for(int i=1;i<=n;i++)if(frr[i]==0)cr=false;

    if(v.size()!=m||!cr)cout<<"Impossible"<<endl;
    else
    {
        cout<<"Possible"<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
