#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<string,string> >v;
    for(int i=0;i<n;i++)
    {
        string arr,frr;
        cin>>arr>>frr;
        v.push_back(make_pair(arr,frr));
    }
    vector<string>p;

     for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    for(int i=0;i<v.size();i++)
    {
       string arr=v[i].second,frr=arr,prr;
       int c=0;
       if(arr!="9"&&v[i].first!="9"){
       for(int j=0;j<v.size();j++)
       {
           if(v[j].first==frr&&v[j].first!="9"&&v[j].second!="9")
           {
               c++;
               prr=v[j].second;
               frr=prr;
               v[j].first="9";
               v[j].second="9";
           }
       }
       if(c>0)
       {
           p.push_back(v[i].first);
           p.push_back(frr);
           v[i].first="9";
           v[i].second="9";
       }
       }
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i].first!="9"&&v[i].second!="9")
        {
            p.push_back(v[i].first);
            p.push_back(v[i].second);
        }
    }
    cout<<p.size()/2<<endl;
    for(int i=0;i<p.size();i+=2)
    {
        cout<<p[i]<<" "<<p[i+1]<<endl;
    }

}
