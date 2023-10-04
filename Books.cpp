/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int arr[100005],a=1,b,sum,n,m,k;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   cin>>n>>m;

   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       if(sum>m)
       {
           sum-=arr[a++];
       }
       k=max(k,i-a+1);
   }
   cout<<k<<endl;
}


