#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    vector<pair<int,int> >vk;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        vk.push_back(make_pair(arr[i],i));
    }
    sort(vk.begin(),vk.end());
    map<int,int>mp;
    int frr[n+5];
    for(int i=0;i<n;i++)frr[i]= -1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]<k)
        {
            mp[arr[i]]++;
            sum++;
        }
        else
        {
            frr[i]=0;
        }
    }
 // cout<<sum<<endl;
    int r = sum%k;
    sum -= r;
// cout<<sum<<endl;
    int idx = 1;

 //   for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

    for(int i=0;i<n;i++)
    {
      //  int ik = vk[i].first;
        int pk = vk[i].second;
      //  cout<<pk<<endl;
        if(frr[pk]!=0&&sum>0)
        {
            frr[pk]=idx;
            idx++;
            sum--;
        }
        else frr[pk]=0;
        if(idx>k)idx=1;
    }

    for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1

13 3
3 1 4 1 5 9 2 6 5 3 5 8 9

*/
