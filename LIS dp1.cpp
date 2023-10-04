#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>num;

        vector<int>::iterator iv = lower_bound(v.begin(),v.end(),num);
        if(iv==v.end())v.push_back(num);
        else v[iv-v.begin()]=num;

        // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }
    cout<<v.size()<<endl;
}
