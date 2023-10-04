#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<string,int> >v;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        int k;
        cin>>k;
        mp[k]=i;
        v.push_back(make_pair(str,k));
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i].first>v[j].first)
            {
                swap(v[i].first,v[j].first);
                swap(v[i].second,v[j].second);
            }
            else if(v[i].first==v[j].first&&v[i].second<v[j].second)
            {
                 swap(v[i].first,v[j].first);
                swap(v[i].second,v[j].second);
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i].first<<endl;
        cout<<mp[v[i].second]<<endl;
    }
}
