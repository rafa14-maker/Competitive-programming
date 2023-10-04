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

    int n;
    cin>>n;

    int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  sort(arr,arr+n);

  int frr[n],k=0;

  for(int i=0;i<n;i++)
  {
      if(arr[i]!=arr[i+1])
      {
          frr[k]=arr[i];
          k++;
      }
  }
  if(k==1)
  {
      cout<<0<<endl;
      return 0;
  }
int   sum=frr[0]+frr[k-1];

  sum/=2;

  int counter=0;

cout<<sum<<endl;

}



