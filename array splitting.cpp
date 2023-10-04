#include<bits/stdc++.h>
using namespace std;

const int N=3e5+7;

long long arr[N],frr[N];

int main()
{
      long long n,p;
    cin>>n>>p;
  //  long long arr[n+5],frr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

    for(int i=1;i<n;i++)frr[i]=arr[i+1]-arr[i];

    n--;
    p--;

    sort(frr+1,frr+n+1);

    long long sum=0;

    for(int i=0;i<=n-p;i++)
    {
        sum+=frr[i];
    }
   cout<<sum<<endl;
}
