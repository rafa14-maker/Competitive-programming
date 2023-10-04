/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n+5],min1=10000000,min2=10000000,a,b;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<min1)
        {
            min1=arr[i];
            a=i;
        }
    }
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=min1)
       {
          int lcm=(min1*arr[i])/__gcd(min1,arr[i]);
          if(lcm<min2)
          {
              min2=lcm;
              b=i;
          }
       }
   }

   cout<<a+1<<" "<<b+1<<endl;

}



