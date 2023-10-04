#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     string arr;

     cin>>arr;

     int i,k=arr[0],j=1,ml;

     sort(arr.begin(),arr.end());


     for(i=1;i<arr.size();i++)
     {
         if(arr[i]==k)
         {
             arr[i]=0;
         }
         else if(arr[i]!=k)
         {
             k=arr[i];
         }
     }

     ml=count(arr.begin(),arr.end(),0);



    ml=arr.size()-ml;



    if(ml%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

 }
