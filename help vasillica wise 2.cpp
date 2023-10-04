/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int r1,r2,d1,d2,c1,c2,a,b,c,d;
  cin>>r1>>r2>>c1>>c2>>d1>>d2;

  c=(c1+d2-r1)/2;
  a=c1-c;
  b=d2-c;
  d=r2-c;
  // cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
  if(d1==a+d&&c2==b+d&&r1==a+b)
  {
      if(a!=b&&b!=c&&c!=d&&d!=a&&b!=d&&a!=c&&a<=9&&b<=9&&c<=9&&d<=9&&a>0&&b>0&&c>0&&d>0){
      cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;}

      else cout<<-1<<endl;
  }
  else
  {
      cout<<-1<<endl;
  }

}



