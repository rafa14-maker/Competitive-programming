#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int a,b;
   cin>>a>>b;
   int k = a+b;

   for(int i= 0;i<=1000;i++)
   {
       for(int j = 0;j<=1000;j++)
       {
           int pk = i+j;
           int kp = abs(i-a)+abs(j-b);
           if(k/2 == pk && k/2 == kp)
           {
               cout<<i<<" "<<j<<endl;
               return ;
           }
       }
   }
   cout<<-1<<" "<<-1<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

