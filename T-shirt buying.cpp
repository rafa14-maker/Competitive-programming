#include<bits/stdc++.h>
using namespace std;

vector<int>arr[200005];
vector<int>frr[200005];

  map<int,int>mp;

int main()
{
    int n;
    cin>>n;
    int krr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>krr[i];
        mp[krr[i]]=2;
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a].push_back(krr[i]);
       // sort(arr[a].begin(),arr[a].end());
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a].push_back(krr[i]);
       // sort(arr[a].begin(),arr[a].end());
    }

    for(int i=0;i<=3;i++)
    {
        sort(arr[i].begin(),arr[i].end());
        reverse(arr[i].begin(),arr[i].end());
    }

    vector<int>v;

   int m;

   cin>>m;

   int prr[m+5];

   for(int i=0;i<m;i++)cin>>prr[i];

   for(int i=0;i<m;i++)
   {
       int k=prr[i];
       int flag=0;
       for(int j=arr[k].size()-1;j>=0;j--)
       {
           if(mp[arr[k][j]]==2)
           {
               flag++;
               v.push_back(arr[k][j]);
               mp[arr[k][j]]=0;
               arr[k].pop_back();
               break;
           }
           else
           {
               arr[k].pop_back();
           }
       }
     //  int l=0,r=arr[k].size()-1;


       if(flag==0)
       {
           v.push_back(-1);
       }
   }
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
