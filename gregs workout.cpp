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

  int arr[n+6];

  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }

  int a=0,b=0,c=0;

  for(int i=1;i<=n;i++)
  {
      if(i%3==1)a+=arr[i];
      if(i%3==2)b+=arr[i];
      if(i%3==0)c+=arr[i];
  }

  if(a>b&&a>c)cout<<"chest"<<endl;
  if(b>a&&b>c)cout<<"biceps"<<endl;
  if(c>a&&c>b)cout<<"back"<<endl;

}


