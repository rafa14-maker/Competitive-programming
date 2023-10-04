#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    int k=0,sum=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        sum+=(k*v[i].first)+1;
        k++;
    }
    cout<<sum<<endl;
        for(int i=v.size()-1;i>=0;i--)
    {

        cout<<v[i].second<<" ";
    }

}
