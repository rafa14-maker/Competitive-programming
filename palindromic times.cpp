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

  string arr;
  cin>>arr;

  int a=0,k=1;

  for(int i=arr.size()-1;i>=0;i--)
  {
      if(arr[i]!=':')
      {
          a+=(arr[i]-'0')*k;
          k*=10;
      }
  }

   a++;

   while(1==1)
   {
        if((a%100)>59)
       {
           a+=39;
       }
       if((a%10000)/1000==(a%10)&&(a%100)/10==(a%1000)/100)
       {
           break;
       }
       a++;
        if(a>=2400)
       {
           a=0;
       }
   }
 //  cout<<a<<endl;
   cout<<(a%10000)/1000<<(a%1000)/100<<":"<<(a%100)/10<<a%10;
}


