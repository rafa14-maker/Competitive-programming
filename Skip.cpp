#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    v.push_back(k);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector<int>fr;
    for(int i=0;i<v.size()-1;i++)
    {
        int a=v[i+1]-v[i];
        fr.push_back(a);
    }
    int counter=fr[0];
    for(int i=1;i<fr.size();i++)
    {
        counter=__gcd(counter,fr[i]);
    }
    cout<<counter<<endl;
}
