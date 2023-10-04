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
        int c=0;

        for(int j=0;j<v.size();j++)
        {
            if(v[j].second==arr)
            {
                c++;
                v[j].second=frr;
                break;
            }
        }

        if(c==0)
        {
            v.push_back(make_pair(arr,frr));
        }

    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}

