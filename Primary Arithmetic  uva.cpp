#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll a,b;
  while(1)
   {
       cin>>a;
       cin>>b;
      // cout<<a<<" "<<b<<endl;
    if(a==0&&b==0)break;
       int cnt = 0 ;
       bool tr = false;
       while(a>0||b>0)
       {
       //    cout<<a<<" "<<b<<endl;
           int r = a%10;
           int l = b%10;
           if(r+l>9||(r+l==9&&tr))
           {
               cnt++;
               tr=true;
           }
           else tr=false;

           a/=10;
           b/=10;
       }
      // if(tr)cnt++;
         if(cnt==0)printf("No carry operation.\n");
         else if(cnt==1) printf("%d carry operation.\n",cnt);
         else printf("%d carry operations.\n",cnt);
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

