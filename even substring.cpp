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

     string arr;
     cin>>arr;

     int counter=0;

     for(int i=0;i<arr.size();i++)
     {
         int k=arr[i]-'0';
         if(k%2==0)
         {
             counter+=(i+1);
         }

     }

     cout<<counter<<endl;

}



