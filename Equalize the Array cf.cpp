#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

void solve()
{
   int n;
   scanf("%d",&n);

   set<int>st;
   map<int,int>mp;

   int arr[n+5];

   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       st.insert(arr[i]);
       mp[arr[i]]++;
   }

   int frr[N]={0};

   for(auto it = st.begin();it != st.end();it++)
   {
       int v = *it;
     //  cout<<v<<" "<<frr[v]<<endl;
       frr[mp[v]]+=mp[v];
       //  cout<<v<<" "<<frr[v]<<endl;
   }

   int mx = 0,pk =0;

   for(int i=0;i<N;i++)
   {
       //cout<<frr[i]<<endl;
       if(frr[i]>pk)
       {
           pk = frr[i];
           mx = i;
       }
   }

  // cout<<mx<<endl;

   long long sum = 0;

  for(auto it = st.begin();it != st.end();it++)
   {
      int v = *it;
      if(mp[v]!=mx)
      {
        if(mp[v]<mx)  sum+=mp[v];
        else sum+= mp[v]-mx;
      }
   }

   cout<<sum<<"\n";

}

int main()
{
    int q;
   scanf("%d",&q);
    while(q--)solve();
}
