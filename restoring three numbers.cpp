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

    long long arr[4];

    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    sort(arr,arr+4);

    int a=arr[0],b=arr[1],c=arr[2],d=arr[3];

    cout<<d-b<<" "<<d-c<<" "<<d-a<<endl;

}



