#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
   int counter=0,m=0;

   for(int i=0;i<4;i++)
   {
       counter=0;
       if(arr[i]!=-1){
       for(int j=i+1;j<4;j++)
       {
           if(arr[j]!=-1&&arr[i]==arr[j])
           {
               counter++;
               arr[j]=-1;
           }
       }
       }
    m+=(counter);
   }
   cout<<m<<endl;
}
