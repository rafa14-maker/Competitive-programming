#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int s,p,y,j;
   while(scanf("%d %d %d %d",&s,&p,&y,&j)!=EOF)
   {
       int k = j+12;
       int a = 2*s + p + k;
       int kp = 0 ;
       if(a%3!=0)a = a/3 +1;
       else a = a/3;
     //  a = a / 3;
       int b = a - s;
       int c = k-a-b;
       cout<<a<<" "<<b<<" "<<c<<endl;
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

