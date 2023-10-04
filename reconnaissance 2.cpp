
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

   int n,k=0,a,b,l;
   cin>>n;
   int arr[n+5];

   for(int i=1;i<=n;i++)
   {
     cin>>arr[i];
   }
   n++;
   arr[n]=arr[1];

int counter=0;

   for(int i=1;i<=n-1;i++)
   {
       if(counter==0)
       {
           counter++;
          k=abs(arr[i]-arr[i+1]);
          a=i;
          b=i+1;
         // cout<<9008<<endl;
       }

       else
       {
           if(k>abs(arr[i]-arr[i+1]))
           {
               k=abs(arr[i]-arr[i+1]);
               a=i;
               b=i+1;
               if(i+1==n)b=1;
           }
       //    cout<<90000<<endl;
       }
   }
  cout<<a<<" "<<b<<" "<<endl;
}


