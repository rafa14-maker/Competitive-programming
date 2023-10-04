#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
   char arr[n+5][m+5];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)cin>>arr[i][j];
   }
   int res[n+5];
   for(int i=0;i<m;i++)cin>>res[i];

   long long sum=0;

 for(int i=0;i<m;i++)
  {
      int a=0,b=0,c=0,d=0,e=0;
      for(int j=0;j<n;j++)
      {
          if(arr[j][i]=='A')a++;
          if(arr[j][i]=='B')b++;
          if(arr[j][i]=='C')c++;
          if(arr[j][i]=='D')d++;
          if(arr[j][i]=='E')e++;
      }
      int r=max(max(a,b),max(c,d));
      r=max(r,e);
      cout<<r<<endl;
      sum+=(r*res[i]);
  }
  cout<<sum<<endl;

}
