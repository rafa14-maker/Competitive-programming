#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<long long>s;
    map<long long,long long>mp;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        s.insert(a);
        mp[a]=i;
    }
    long long sum=0,counter=0;
    vector<long long>v;
    for(set<long long>::iterator it=s.begin();it!=s.end();it++)
    {
       v.push_back(*it);
    }

    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        {
            sum=v[i];
            counter=max(counter,sum);
        }
        else if(i-1>=0&&((v[i]-v[i-1])==(mp[v[i]]-mp[v[i-1]])))
        {
              sum+=v[i];
            counter=max(counter,sum);
        }
        else
        {
              sum=v[i];
            counter=max(counter,sum);
        }
    }
    //counter=max(counter,sum);
    cout<<counter<<endl;
}
