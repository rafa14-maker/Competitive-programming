#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     string arr;

     cin>>arr;

     int i,k=arr[0],j=1;



     sort(arr.begin(),arr.end());

     for(i=1;i<arr.size();i++)
     {
         if(arr[i]!=k)
         {
            k=arr[i];

            j++;


         }

     }


    if(j%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

 }
