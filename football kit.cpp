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

   int arr[100002]={0};

   int n,a,b;

   cin>>n;

   int frr[n];

   for(int i=0;i<n;i++)
   {
       cin>>a>>frr[i];
       arr[a+1]++;
   }

   for(int i=0;i<n;i++)
   {
       cout<<(n-1)+arr[frr[i]+1]<<" "<<(n-1)-arr[frr[i]+1]<<endl;
   }


}



