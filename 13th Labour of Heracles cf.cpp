#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    long long sum=0;
    for(int i=0;i<n;i++)
        cin>>arr[i],sum+=arr[i];

        int frr[n+5][2];
        vector<pair<int,int> >v;
        for(int i=0;i<n-1;i++)
        {
            cin>>frr[i][0]>>frr[i][1];
            v.push_back(make_pair(frr[i][0]+frr[i][1],i));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        cout<<sum<<" ";
        for(int i=0;i<v.size()-1;i++)
        {
          int  a=v[i].second;
           int b=v[i].first;
           int pk=arr[frr[a][0]-1];
           int kp=arr[frr[a][1]-1];
            int k=max(kp,pk);
            sum+=k;
           // sum+=a;
            cout<<sum<<" ";
        }
        cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
