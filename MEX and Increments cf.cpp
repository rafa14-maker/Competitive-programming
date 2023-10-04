#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
   map<int,int>mp;
   int idx = 0;
   int mx = 0;
   for(int i=1;i<n;i++)
   {
       if(arr[i]-arr[i-1]<=1)idx = i,mx=max(mx,arr[i]);
   }
   int frr[3*n+5]={0};
   for(int i=0;i<=n;i++)frr[i] = -1;

   for(int i=0;i<=idx;i++)
   {
       mp[arr[i]]++;
   }

 //  cout << mx<<endl;

   for(int i=0;i<=mx;i++)
   {
     frr[i] = mp[i];
   }

   frr[mx+1]=0;

    vector<int>v;

    for(int i=mx;i>=0;i--)
    {
        if(mp[arr[i]]>1)
        {
            int k = mp[arr[i]]-1;
            for(int j=0;j<k;j++)v.push_back(arr[i]);
        }
    }

    cout << v.size()<<endl;

    int pk = mx+1 + v.size();

    int sum = 0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]>pk)continue;
        sum += abs(v[i]-pk);
        frr[pk] = sum;
        pk--;
    }

    for(int i=0;i<=n;i++)
    {
        cout << frr[i] <<" ";
    }

   cout << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*
1
7
0 1 2 3 4 3 2

*/

