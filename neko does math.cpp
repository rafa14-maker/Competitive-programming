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

   long long a,b;
   cin>>a>>b;

   int c=abs(a-b);

   vector<long long>arr;

   for(int i=1;i*i<=c;i++)
   {
      if(c%i!=0)continue;

      arr.push_back(i);
      if(c/i!=i)
      {
          arr.push_back(c/i);
      }

   }

   sort(arr.begin(),arr.end());


  // for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";

   long long k=1000000000000,r=0;

   for(int i=0;i<arr.size();i++)
   {
       if(a%arr[i]!=b%arr[i])continue;
       if(a%arr[i]==0)
       {
           long long p=(a*b)/__gcd(a,b);
           if(p<k)
           {
               k=p;
               r=0;
           }
       }
       else
       {
           long long f=arr[i];
           long long p=((f-a%f+a)*(f-b%f+b))/__gcd((f-a%f+a),(f-b%f+b));
           if(p<k)
           {
               k=p;
               r=f-a%f;
           }
       }
   }

   cout<<r<<endl;
}



