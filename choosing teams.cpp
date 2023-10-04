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

    int n,m;
    cin>>n>>m;

    int arr[n+2];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int counter=0;

    for(int i=0;i<n-2;i+=3)
    {
        int a=5-arr[i],b=5-arr[i+1],c=5-arr[i+2];
        int k=min(min(a,b),c);
        if(k>=m)counter++;
    }
   cout<<counter;
}



