#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N =1e6+5;

void solve()
{
  int n,k;
  cin>>n>>k;
  int arr[n+5];
  vector<int>v;
 // int frr[N]={0};
  for(int i=0;i<n;i++){cin>>arr[i],v.push_back(arr[i]);}
 sort(v.begin(),v.end());
  ll sum=0;
  for(int i=20;i>=0;i--)
  {
    //  cout<<1<<endl;
     int l=0,r=v.size()-1;
     int kp=-1;
     while(l<=r)
     {
         int mid=(l+r)/2;
         if(v[mid]>=i)
         {
             kp=mid;
             r=mid-1;
         }
         else l=mid+1;
     }
    // cout<<i<<" "<<kp<<" "<<sum<<endl;
     if(kp!=-1)
     {
         int flag=v.size()-kp;
         if(flag<=k&&flag!=-1)
         {
             sum+=(i*(flag));
             k-=flag;
         }
        else
        {
            sum+=(i*k);
           k=0;
        }
     }
  }cout<<sum<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();
    solve();
}

