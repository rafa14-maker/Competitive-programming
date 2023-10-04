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
   char k;
   cin>>n;
   string arr,frr;

   for(int i=0;i<n*n;i++)
   {
       cin>>k;
       arr+=k;
   }
   frr=arr;

   reverse(frr.begin(),frr.end());

   if(frr==arr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;

}



