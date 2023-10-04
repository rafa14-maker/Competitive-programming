#include<bits/stdc++.h>
using namespace std;

const long long maxn = 1e5+5 ;
long long arr[maxn];

void f()
{
    for(int i=1;i<maxn;i++)
    {
        arr[i]=i*2-1;
    }
    for(int i=1;i<maxn;i++)arr[i]+=arr[i-1];
}

void solve()
{
    long long n;
    cin>>n;
    int k;
    int l=1,r=1e5;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]>=n)
        {
            k=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
  // cout<<k<<endl;

   int st = arr[k-1]+1;
   int en = arr[k];

   int mn = (st+en)/2;

   int i = k,j=k;

   if(n>mn)j-=abs(n-mn);
   if(n<mn)i-=abs(n-mn);

   cout<<i<<" "<<j<<endl;

}

int main()
{
    f();
    int kp=1e5;
  //  cout<<arr[kp]<<endl;
    int q;
    cin>>q;
    while(q--)solve();
}
