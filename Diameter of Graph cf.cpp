#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

void solve()
{
   long long a,b,c;
   cin>>a>>b>>c;

   if(b<a-1)
   {
       cout<<"NO"<<endl;
       return ;
   }

   long long sum = (a*(a-1))/2;

   if(b>sum)
   {
       cout<<"NO"<<endl;
       return ;
   }

  int idx = 0;

 //  if(b==0)idx = 0;
   if(b==sum)idx =1;
   else idx = 2;

   if(idx<=c-2||a==1&&b==0&&c>=2)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
