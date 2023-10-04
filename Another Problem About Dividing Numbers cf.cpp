#include<bits/stdc++.h>
using namespace std;


void solve()
{
   // return ;
  long long a,b,k;
  cin>>a>>b>>k;

  long long gd = __gcd(a,b);

// long long gd = 1;

   if((gd==a||gd==b)&&k==1&&a!=b)
   {
       cout<<"YES"<<endl;
       return ;
   }

  a/=gd;
  b/=gd;

  int ab=0,cd=0;
  int ak=a,bk=b,dk=gd;

  for(int i=2;i<=sqrt(a);i++)
  {
      while(ak%i==0)ak/=i,ab++;
  }
  if(ak>1)ab++;

  for(int i=2;i<=sqrt(b);i++)
  {
      while(bk%i==0)bk/=i,cd++;
  }
  if(bk>1)cd++;

  long long pk=gd,cm=0;

  for(int i=2;i<=sqrt(gd);i++)
  {
      while(pk%i==0)pk/=i,cm++;
  }
  if(pk>1)cm++;
  // if((gd==a||gd==b)&&k==1)cout<<"YES"<<endl;
   if(k>=2&&k<=ab+cd+cm)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;



}

int main()
{
  int q;
  cin>>q;
  while(q--)solve();
  //solve();
}

