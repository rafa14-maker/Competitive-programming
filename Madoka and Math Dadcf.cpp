#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

  if(n==1)cout << 1<<endl;
  else if(n==2)cout <<2<<endl;
  else
  {
     int k = n/3;
     if(n%3==1)
     {
         cout<<1;
         for(int i=0;i<k;i++)cout<<"21";
         cout<<endl;
     }
     if(n%3==2)
     {
         for(int i=0;i<k;i++)cout<<"21";
        cout<<2;
         cout<<endl;
     }
     if(n%3==0)
     {
         for(int i=0;i<k;i++)cout<<"21";
         cout<<endl;
     }
  }
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

