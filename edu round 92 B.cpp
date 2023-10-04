#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   int n, k ,z;
   cin>>n>>k>>z;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   vector<int>v;
   vector<int>frr;
   int mn=0;
   for(int i=0;i<k+1;i++)
   {
       v.push_back(arr[i]);
       frr.push_back(arr[i]);
       mn+=arr[i];
   }

   for(int i=1;i<v.size();i++)v[i]+=v[i-1];

   for(int i=1;i<v.size();i++)
   {
       int sum=0;
       int p=min(k-i,z);

        if(z%2==0)
        {
            sum+=frr[i]*(p/2);
            sum+=frr[i-1]*(p/2);
        }
        else
        {
            if(p==1)sum+=frr[i];
             else sum+=frr[i]*((p/2));
             if(p==1)sum+=frr[i-1];
           else sum+=frr[i-1]*((p/2)+1);
          //  else sum+=frr[i-1]*(p/2);
        }
        sum+=v[k-p-1];
        mn=max(mn,sum);
   }
   cout<<mn<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

