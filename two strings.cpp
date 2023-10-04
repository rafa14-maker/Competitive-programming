#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    int flag=0;

   for(int i=0;i<arr.size()-1;i++)
   {
       if(arr[i]=='A'&&arr[i+1]=='B')
       {
           for(int j=0;j<arr.size()-1;j++)
           {
               if(arr[j]=='B'&&arr[j+1]=='A')
               {
                   flag++;
                   if(i!=j&&i+1!=j&&j+1!=i){
                   cout<<"YES"<<endl;
                   return 0;}
               }
           }
           if(flag==0)
           {
               cout<<"NO"<<endl;
               return 0;
           }
       }
   }

   cout<<"NO"<<endl;
}
