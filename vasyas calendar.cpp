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

    int d,n,a,sum=0;
    cin>>d>>n;

   for(int i=0;i<n-1;i++)
   {
       cin>>a;
       sum+=(d-a);
   }
   cin>>a;

    cout<<sum<<endl;

}



