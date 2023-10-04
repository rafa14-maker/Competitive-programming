#include<bits/stdc++.h>
using namespace std;

using long long = ll;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
  ll n = 4*a*b;
 ll m = c*c+a*a+b*b+2*(a*b-a*c-b*c);
   if(n<m)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
