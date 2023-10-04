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

  int a,b,c,d;

  cin>>a>>b>>c>>d;

  if(a==c||b==d)cout<<1<<" ";
  else cout<<2<<" ";


  if((a+b)%2==0&&(c+d)%2==0||(a+b)%2==1&&(c+d)%2==1)
  {
      if(abs(a-c)==abs(b-d))cout<<1<<" ";
      else cout<<2<<" ";
  }
  else cout<<0<<" ";

  cout<<max(abs(a-c),abs(b-d))<<endl;




}



