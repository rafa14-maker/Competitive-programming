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

   vector<int>arr;
   int a=1,b=2;

   while(a<=n)
   {
       arr.push_back(a);
       a+=b;
       b++;
   }

   for(int i=0;i<arr.size();i++)
   {
       for(int j=0;j<arr.size();j++)
       {
           if(arr[i]+arr[j]==n)
           {
               cout<<"YES"<<endl;
               return 0;
           }
       }
   }

   cout<<"NO"<<endl;

}



