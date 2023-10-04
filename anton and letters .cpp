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
   char k;

   while(k!='}')
   {
       cin>>k;
       if(k>='a'&&k<='z')arr+=k;
   }

   int sum=0,frr[27];

   for(int i=0;i<27;i++)frr[i]=0;

   for(int i=0;i<arr.size();i++)
   {
      if(arr[i]>='a'&&arr[i]<='z')frr[arr[i]-'a']++;
         }

   for(int i=0;i<27;i++)
   {
       if(frr[i]>0)sum++;
   }
   cout<<sum;

}



