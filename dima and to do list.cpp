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

    int n,k;
    cin>>n>>k;

    int arr[n+5]={0};

    for(int i=0;i<n;i++)
    {
       int p;
       cin>>p;
       arr[i%k]+=p;
    }

   int m=arr[0],pos=0;

   for(int i=1;i<k;i++)
   {
       if(arr[i]<m)
       {
           pos=i;
           m=arr[i];
       }
   }

   cout<<pos+1<<endl;
}



