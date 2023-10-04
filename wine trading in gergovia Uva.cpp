#include<bits/stdc++.h>
using namespace std;

int n;

void solve()
{
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0;

        for(int j=0;j<n-1;j++)
        {
            if(arr[j]!=0){
          int k=abs(arr[j]);
          sum+=k;
          arr[j+1]+=arr[j];
            }
        }
    cout<<sum<<endl;
}

int main()
{
   while(1)
   {
       cin>>n;
       if(n==0)break;
       solve();
   }
}
