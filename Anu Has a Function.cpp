#include<bits/stdc++.h>
using namespace std;

#define Check(N,p) (!(((N)&((1LL)<<(p)))==(0)))

int arr[35];

int main()
{

  vector<long long>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      long long a;
      cin>>a;
      v.push_back(a);
      for(int j=0;j<=32;j++)
      {
          if(Check(a,j))arr[j]++;
      }
  }
  for(int i=0;i<=32;i++)
  {
      if(arr[i]==1)
      {
          for(int j=0;j<v.size();j++)
          {
              if(Check(v[j],i))
              {
                  swap(v[0],v[j]);
                  break;
              }
          }
      }
  }
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

}
