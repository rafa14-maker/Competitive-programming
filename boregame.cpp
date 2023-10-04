#include<bits/stdc++.h>
using namespace std;

long long arr[100005],i;

int main()
{
    long long n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        arr[a]+=a;
    }

  for(i=2;i<=100001;i++)
  {
      arr[i]=max(arr[i-1],arr[i]+arr[i-2]);
  }

    cout<<arr[i-1];
}
