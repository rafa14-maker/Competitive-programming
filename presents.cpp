/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i=1,p;
   cin>>n;
   p=n;
   vector<pair<int,int> >arr;
   while(p--)
   {
       cin>>k;
       arr.push_back(make_pair(k,i));
       i++;
   }
   sort(arr.begin(),arr.end());

   for(int j=0;j<n;j++)
   {
       cout<<arr[j].second<<" ";
   }

}
