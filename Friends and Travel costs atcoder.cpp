#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
   // long long arr[n+5][2];
   vector<pair<long long,long long > >arr;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end());
    long long sum=0,dis=0,mon=k;
    for(int i=0;i<n;i++)
    {
      //  cout<<"yes "<<" "<<sum<<endl;
        long long d = arr[i].first-dis;
        if(d>mon)
        {
            sum+=mon;
            mon=0;
            break;
        }
        else
        {
            dis=arr[i].first;
            sum+=d;
            mon-=d;
            mon+=arr[i].second;
        }
    }
    sum+=mon;
    cout<<sum<<endl;
}
