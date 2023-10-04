#include<bits/stdc++.h>
using namespace std;



void solve()
{
  //  cout<<"hello"<<endl;

   long long n;
  cin>>n;
  long long arr[n+5];
  long long sum=0;
  for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];

  if(sum%n!=0)
  {
      cout<<-1<<endl;
      return ;
  }

  sum/=n;

  int cnt=0;

  for(int i=0;i<n;i++)if(arr[i]>sum)cnt++;

 if(cnt>0) cout<<cnt<<endl;
 else cout<<0<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
 // solve();
}

