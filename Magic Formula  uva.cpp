#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   ll a,b,c,d,l;

   while(1)
   {
       cin>>a>>b>>c>>d>>l;
       if(a==0&&b==0&&c==0&&d==0&&l==0)break;
       int cnt = 0;

       for(int i = 0;i <= l;i++)
       {
           ll sum = a*i ;
           sum *= i;
           sum += b*i;
           sum += c;
           if(sum%d==0)cnt++;
       }

       cout << cnt << endl;

   }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

