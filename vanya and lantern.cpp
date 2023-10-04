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

  int arr[n+5];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  sort(arr,arr+n);

  int k=0;

  for(int i=0;i<n;i++)
  {
      k=max(k,arr[i]-arr[i-1]);
  }

  double p=k*0.5;

  if(p<(double)arr[0])
  {
      p=arr[0];
  }
  double i=m-arr[n-1];
   if(p<i)
  {
      p=i;
  }

  printf("%.10lf\n",p);

}



