#include<bits/stdc++.h>
using namespace std;


void solve()
{
 int n;
 cin>>n;
 int arr[n+5];
 int frr[n+5];
 int krr[n+5];
 map<int,int>mp;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
     frr[i]=arr[i];
 }
 sort(arr,arr+n);
 int idx=n-1;
 for(int i=0;i<=30;i++)
 {
     int pk=pow(2,i);
     while(pk--)
     {
        krr[idx]=i;
        idx--;
        if(idx<0)break;
     }
     if(idx<0)break;
 }

// map<int,int>mp;

  for(int i=0;i<n;i++)
  {
      mp[arr[i]]=krr[i];
  }

  for(int i=0;i<n;i++)
  {
      cout<<mp[frr[i]]<<" ";
  }
 cout<<endl;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


