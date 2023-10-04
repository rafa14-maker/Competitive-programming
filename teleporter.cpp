#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
   long long arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    long long counter=0;
    bool vis[n+5];
    for(int i=1;i<=n;i++)vis[i]=false;
    int idx=1;

    vector<long long>v;

    while(1)
    {
       int p=idx;
       if(vis[p])
       {
         v.push_back(idx);
           break;
       }
       else
       {
           v.push_back(idx);
           idx=arr[idx];
           vis[p]=true;
       }
    }

   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
  //  cout<<arr[idx]<<endl;

    vector<long long>krr;
    bool tr=false;
   int kp=v.size()-1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[kp])
        {
           // k--;
            tr=true;
        }
        if(!tr)
        {
         if(i!=0)  k--;
        }
        else
        {
            krr.push_back(v[i]);
        }
    }

    for(int i=0;i<krr.size();i++)cout<<krr[i]<<" ";cout<<endl;

    long long pk=krr.size();
    k=k%pk;
    cout<<krr[k]<<endl;
}
