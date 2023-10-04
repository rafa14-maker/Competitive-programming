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

    int n,m,i,j;
    cin>>n>>m;

    int arr[n+5],frr[m+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>frr[i];
    }

   for(i=0,j=0;i<n&&j<m;j++)
   {
       if(frr[j]>=arr[i])
       {
           i++;
       }
   }

   cout<<n-i<<endl;

}



