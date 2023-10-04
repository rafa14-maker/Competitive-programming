#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
  n-=(k*(d/t));
  if(n>k)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
