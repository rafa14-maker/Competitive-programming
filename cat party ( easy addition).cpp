#include<bits/stdc++.h>
using namespace std;

int main()
{
   int m,s;
   cin>>m>>s;

   if(s>m*9)
   {
       cout<<"-1 -1"<<endl;
       return 0;
   }

   int arr[m+5];

   for(int i=0;i<m;i++)arr[i]=9;

   int sum=m*9;

   while(s<sum)
   {
       for(int i=m-1;i>=0;i--)
       {
          while(arr[i]>0)
          {
              if(sum==s)break;
              sum--;
              arr[i]--;
          }
       }
   }


}
