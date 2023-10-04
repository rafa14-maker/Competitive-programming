#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[n+5];

    map<long long,long long>m;

    set<long long>s;

    vector<long long>v;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        v.push_back(arr[i]);

        m[arr[i]]++;
    }
    sort(v.begin(),v.end());
  // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
 //  cout<<s.size()<<endl;
    set<long long>::iterator it;

    long long counter=0,p=0;

    for(it=s.begin();it!=s.end();it++)
    {
       // cout<<1;
        p=*it;
        counter+=m[*it];
       // cout<<m[*it];
        if(counter>=k)break;
    }
  //  if(k==0)cout<<v[0]<<endl;
if(counter==k&&p<=1e9)cout<<p;
    else cout<<-1;
    //sort(s.begin().s.end());
}
