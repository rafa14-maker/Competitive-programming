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

  int t;
  cin>>t;

  while(t--)
  {
     long long  int h,p,a;
    scanf("%lld %lld %lld",&h,&p,&a);
      int counter=0,i=1;
      while(h>0)
      {
          counter++;
          if(counter%2==1)
          {
              h-=i*p;
              i++;
          }
          else
          {
              h+=a;
          }
      }
      printf("%d\n",counter);
  }


}



