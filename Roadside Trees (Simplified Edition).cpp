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

   int n,a,k=0;
   cin>>n;

   int sum=0;
   while(n--)
   {
       cin>>a;
       if(k==0)
       {
           sum+=a+1;
           k=a;
       }
       else if(k>a)
       {
       sum+=(k-a)+2;
       k=a;
       }
       else if(k<=a)
       {
          sum+=(a-k)+2;
          k=a;
       }
     //  cout<<sum<<" ";
   }

   cout<<sum<<endl;


}



