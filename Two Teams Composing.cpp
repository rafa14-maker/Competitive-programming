#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            s.insert(arr[i]);
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mp[arr[i]],mx);
        }
       // mx--;
        int p=s.size();
        p--;
      // cout<<min(p-1,mx)<<endl;
      if(mx>p)
      {
          cout<<min(p+1,mx-1)<<endl;
      }
      else{
        cout<<mx<<endl;
      }
    }
}
