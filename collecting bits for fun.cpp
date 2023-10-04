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
   char frr[5][5];
   char k;

   int arr[10];

   for(int i=1;i<=9;i++)
   {
       arr[i]=0;
   }

   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           cin>>k;
           if(k>='1'&&k<='9')
           {
               arr[k-48]++;
           }
       }
   }

   for(int i=1;i<=9;i++)
   {
       if(arr[i]>n*2){cout<<"NO"<<endl;
       return 0;}
   }

   cout<<"YES"<<endl;

}



