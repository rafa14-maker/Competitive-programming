#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n,x;
  cin>>n>>x;
  int arr[n+5];
  for(int i=1;i<=n;i++)cin>>arr[i];
  ll l=1,r=1,sum=arr[1];
  ll idx=-1;
  while(1)
  {
    // cout<<l<<" "<<r<<" "<<idx<<endl;
     if(sum==0||l==r)
     {
         r++;
         if(r>n)
         {
             r--;
             break;
         }
         sum+=arr[r];
     }
    else  if(sum%x==0)
      {
          sum-=arr[l];
          l++;
          if(l>n)
          {
              l--;
              break;
          }
      }
      else if(sum%x!=0)
      {
          idx=max(idx,r-l+1);
          r++;
          if(r>n)
          {
              r--;
              break;
          }
          sum+=arr[r];
      }
  }
  if(sum%x!=0)idx=max(idx,r-l+1);
  cout<<idx<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
