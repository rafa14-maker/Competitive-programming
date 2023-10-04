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

  int n,k=0,counter=0,p;
  cin>>n;

  int arr[n+5],frr[n+5];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(k==0)k=arr[i];
      else if(k>arr[i])
          {  counter++;
          p=i;
              }
      k=arr[i];
      frr[i]=arr[i];
  }
  // cout<<counter<<endl;
  if(counter>1)
  {
     cout<<-1<<endl;
  }
  else if(counter==0)cout<<0<<endl;
  else if(counter==1)
  {
    if(arr[n-1]<=arr[0]){
			cout<<n-p<<endl;
		}
		else
		    cout<<-1<<endl;
  }

}


