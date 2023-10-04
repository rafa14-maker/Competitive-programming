#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);

  int cnt=0;
  bool tr=true;


    for(int i=0;i<n;i++)
    {
        if(arr[i]>1)tr=false;
        if(i==n-1||arr[i]==1)cnt++;
        else cnt+=2;
    }

    if(n==1)cout<<"First"<<endl;
    else if(tr)
    {
        if(n%2==1)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else if(cnt%2==1)cout<<"First"<<endl;
    else cout<<"Second"<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();

    //solve();
}

