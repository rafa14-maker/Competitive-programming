#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   long long  counter=0;
   for(int i=2;i<=n;i+=2)
   {
       for(int j=2;j<=m;j+=2)
       {
           counter+=(n-i+1)*(m-j+1);
       }
   }
   cout<<counter<<endl;
}
