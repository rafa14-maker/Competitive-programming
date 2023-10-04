#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
int arr[N],n;

bool check(int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]==k)k--;
        else if(arr[i+1]-arr[i]>k)return false;
        else continue;
    }
    return true;
}

int f()
{
    int l=0,r=10000005,mid;
    while(l<=r)
    {
        if(l==r)return l;
        int mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else l=mid+1;
    }
}

int main()
{
    int q;
    cin>>q;
   int counter=0;
   while(q--)
   {
      cin>>n;
      arr[0]=0;
      for(int i=1;i<=n;i++)cin>>arr[i];
      int ans=f();
      cout<<"Case "<<++counter<<": "<<ans<<endl;
   }
}
