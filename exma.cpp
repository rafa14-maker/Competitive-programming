#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int>p[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);

    int sum=p[0].second;

    for(int i=1;i<n;i++)
    {
        if(sum<=p[i].second)sum=p[i].second;
        else sum=p[i].first;
    }

    cout<<sum<<endl;
}
