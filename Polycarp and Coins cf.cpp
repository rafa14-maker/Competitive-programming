#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
   ll n;
   cin>>n;
   int mx = n/3;
   int one = mx,two=mx;
   n=n%3;
   if(n==1)one++;
   else if(n==2)two++;
   cout<<one<<" "<<two<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

