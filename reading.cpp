/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int n,k,a;
     cin>>n>>k;

     vector<pair<int,int> >arr;

     for(int i=0;i<n;i++)
     {
        cin>>a;
        arr.push_back(make_pair(a,i));
     }
     sort(arr.begin(),arr.end());

   /*  for(int i=0;i<n;i++)
     {
         cout<<arr[i].first<<" ";
     }*/



    for(int i=n-k;i<n;i++)
     {
         if(i==n-k)
         {
             cout<<arr[i].first<<endl<<arr[i].second+1<<" ";
         }
         else
         {
             cout<<arr[i].second+1<<" ";
         }
     }
     cout<<endl;

}



