#include<bits/stdc++.h>
using namespace std;
#define mod 10000000000000

vector<int>arr;
vector<int>frr;

int main()
{
  long long  n,k,a=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>k;
      frr.push_back(k);
      a=((a%mod)+(k%mod))%mod;
      arr.push_back(a);
  }
  sort(frr.begin(),frr.end());

  vector<int>::iterator it,ft;

  for(it=frr.begin()+1,ft=frr.begin();it!=frr.end();it++,ft++)
  {
      *it=((*it%mod)+(*ft%mod))%mod;
  }

  int t;
  cin>>t;
  while(t--)
  {
      long long  l,b,c;
      cin>>l>>b>>c;
      if(l==1)
      {
          if(b==1)
          {
              cout<<arr[c-1]<<endl;
          }
          else{
          cout<<arr[c-1]-arr[b-2]<<endl;}
      }
      if(l==2)
      {
          if(b==1)
          {
              cout<<frr[c-1]<<endl;
          }
          else{
          cout<<frr[c-1]-frr[b-2]<<endl;}
      }
  }


}

