#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)return true;
    else if(a.first==b.first&&a.second<b.second)return true;
    return false;
}

void solve()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long frr[k+5],arr[k+5];
    for(int i=0;i<k;i++)cin>>frr[i];
    for(int i=0;i<k;i++)cin>>arr[i];

    vector<pair<int,int> >vk;

    for(int i=0;i<k;i++)
    {
        vk.push_back(make_pair(frr[i],arr[i]));
    }

    sort(vk.begin(),vk.end(),cmp);

    bool tr=true;

    for(int i=0;i<k;i++)
    {
        int hel=vk[i].second,att=vk[i].first;
        long long pk=hel/n;
        if(hel%n!=0)pk++;
        if(pk*att>m)
        {
           if(i==k-1)
           {
               if((pk-1)*att>m)tr=false;
           }
           else tr=false;
        }
        m-=pk*att;
    }

    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
