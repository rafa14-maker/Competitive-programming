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


    int n;
    cin>>n;

    int arr[n+5];


    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)flag++;
    }


  int counter=0,sum=1;

  for(int i=1;i<=n;i++)
  {
      if(arr[i]==1)
      {
          sum++;
          counter=max(sum,counter);
      }
      else
      {
          sum=0;
      }
  }
cout<<counter<<endl;

}



