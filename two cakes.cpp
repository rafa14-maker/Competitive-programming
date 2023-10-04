#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,n,i,s=0;
    cin>>n;
    vector<pair<long long ,long long > >arr;
    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        arr.push_back(make_pair(a,i));
    }
    sort(arr.begin(),arr.end());
    for(int i=2;i<2*n;i++)
    {
        s=s+(abs(arr[i].second-arr[i-2].second));
    }
    s=s+arr[0].second+arr[1].second;
    cout<<s<<endl;
    return 0;
}
