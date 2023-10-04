#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int a,b;
  while(scanf("%d %d",&a,&b)!=EOF){
   ll sum = a;
   int n = a;
   while(n>0)
   {
       int k = n/b;
       sum+=k;
       n= n/b + n%b;
       if(n<b)break;
   }
   cout<<sum<<endl;
  }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

