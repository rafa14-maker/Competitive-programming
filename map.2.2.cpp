#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,n;
    string arr;

    map<string,int>coffee;

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
}
