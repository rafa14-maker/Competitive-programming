#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  while(scanf("%d %d",&n,&m))
  {
      if(n==0&&m==0)break;
     map<int,bool>mp;
      while(n--)
      {
          int a;
          cin>>a;
         mp[a]=1;
      }
      int counter=0;
      while(m--)
      {
          int a;
          cin>>a;
         if(mp[a])counter++;
      }
      cout<<counter<<endl;
  }
}
