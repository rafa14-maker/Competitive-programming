#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        int frr[n+5]={0};
        for(int i=0;i<n;i++)cin>>arr[i];
        map<int,int>mp;
        set<int>s;
       vector<pair<int,int> >v;
       int p=-1;

       for(int i=1;i<k-2;i++)
       {
           mp[arr[i]]++;
         s.insert(arr[i]);
            p=max(p,arr[i]);
            frr[i]=1;
       }

 v.push_back(make_pair(mp[p],1));

        for(int i=2,j=k-1;j<n;i++,j++)
        {
            //cout<<i<<" "<<j<<endl;
             mp[arr[i-1]]--;
            if(mp[arr[i-1]]==0)
            {
                int ko=arr[i-1];
                auto r=s.find(ko);
                s.erase(r);
            }
          if(frr[j]==0)
          {
              frr[j]=1;
              s.insert(arr[j]);
              mp[arr[j]]++;
          }
             int m=-1;
            if (!s.empty())
                m = *(s.rbegin());
       //  cout<<m<<endl;
            if(m!=-1)   v.push_back(make_pair(mp[m],i+1));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        cout<<v[0].first<<" "<<v[0].second<<endl;cout<<endl;
    }
}

