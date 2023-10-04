#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>coffee;

    int i,n,k;

    string arr,frr;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr>>k;
        coffee.insert(std::pair<string,int>(arr,k));
    }

    map<string,int>::iterator it;

    for(it=coffee.begin();it!=coffee.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }

    cin>>frr;

    it=coffee.find(frr);

    if(it!=coffee.end())
    {
        coffee.erase(it);
    }

    for(it=coffee.begin();it!=coffee.end();it++)
    {
         cout<<it->first<<" : "<<it->second<<endl;
    }

    return 0;
}
