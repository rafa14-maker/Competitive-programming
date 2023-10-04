#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

long long arr[N];
int n,q;

void f(long long k)
{
    int prev=0;
    while(1)
    {
      //  cout<<prev<<" "<<k<<endl;
        int ans=0;
        int l=1,r=n;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(arr[mid]<=k)
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        if(prev==ans)break;
        else k+=ans-prev;

        prev=ans;
    }

    printf("%lld\n",k);

}

void solve()
{
   // int n;
    cin>>n>>q;
   // int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

   // int q;
  //  cin>>q;
    while(q--)
    {
        long long a;
        cin>>a;
        f(a);
    }

}

int main()
{
    solve();
}
