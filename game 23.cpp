
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

   int n,m;
   cin>>n>>m;

   if(n==m)
   {
       cout<<0<<endl;
       return 0;
   }
   if(m%n!=0)
   {
       cout<<-1<<endl;
       return 0;
   }
   if(m%n==0)
   {
       int counter=0,p=m/n;
      // cout<<p<<endl;

       while(p>1)
       {
           counter++;
           if(p%2==0)p/=2;
           else if(p%3==0)p/=3;
           else{
            cout<<-1<<endl;
            return 0;
           }
       }
       cout<<counter<<endl;
   }

}


