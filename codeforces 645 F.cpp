#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int a,b;
  cin>>a>>b;
   if(a>b)swap(a,b);
   if(a==1)
   {
       if(b==1){
        cout<<1<<endl;
        return ;
       }
       else
       {
           int k=b/2;
           if(b%2==1)k++;
           cout<<k<<endl;
           return ;
       }
   }
     ll k=a*b;
  if(a%2==1&&b%2==1)cout<<(k/2)+1<<endl;
  else cout<<k/2<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

