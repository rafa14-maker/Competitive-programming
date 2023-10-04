#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int k;
  map<int,int>mp;
  for(int i=0;i<n;i++)
  {
     int a;
     cin>>a;
     if(i%2==1)mp[a]++;
    else k=a;
  }
  int kp=1e7;

  for(auto it=mp.begin();it!=mp.end();it++)
  {
      if(it->first!=k)
      {
       //   cout<<it->second<<endl;
          kp=min(kp,(n/2)-(it->second));
      }
  }

 if(kp!=1e7) cout<<kp<<endl;
 else cout<<n/2<<endl;

}

