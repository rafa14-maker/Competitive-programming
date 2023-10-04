#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>alice;
    map<int,int>bob;

    vector<pair<int,int> >v;

     int ck=k,cp=k;
    long long sum=0;

    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        int a,b;
        cin>>a>>b;
        alice[i]=a;
        bob[i]=b;
         v.push_back(make_pair(p,i));
    }

    sort(v.begin(),v.end());


    for(int i=0;i<v.size();i++)
    {
        int p=v[i].second;
        if(bob[p]==1&&alice[p]==1&&ck>0&&cp>0)
        {
            sum+=v[i].first;
            ck--;
            cp--;
        }
    }




    for(int i=0;i<v.size();i++)
    {
        int p=v[i].second;
        if(alice[p]==1&&bob[p]==1)continue;
        if(alice[p]>0&&bob[p]>0&&ck>0&&cp>0)
        {
            sum+=v[i].first;
            ck--;
            cp--;
        }
        else if(alice[p]>0&&ck>0)
        {
            sum+=v[i].first;
            ck--;
        }
        else if(bob[p]>0&&cp>0)
        {
            sum+=v[i].first;
            cp--;
        }
        else if(ck==0&&cp==0)break;
    }

   if(ck==0&&cp==0) cout<<sum<<endl;
   else cout<<-1<<endl;
}
