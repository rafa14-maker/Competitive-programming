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

   int n;
   cin>>n;

   int counter=0,l=0,a;

   for(int i=1;i<=n;i++)
   {
       cin>>a;
       if(a>l)
       {
           l=a;
       }
       if(i>=l)
       {
           counter++;
           l=i+1;
       }
   }
   cout<<counter<<endl;
}



