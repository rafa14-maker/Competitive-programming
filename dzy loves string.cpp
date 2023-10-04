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

  string arr;
  cin>>arr;

  int n,m=0;
  cin>>n;

  int krr[27];
  for(int i=1;i<27;i++)
  {
      cin>>krr[i];
      m=max(m,krr[i]);
  }

  long long sum=0;

  for(int i=0;i<arr.size();i++)
  {
      int p=arr[i]-97;
    //  cout<<p<<" ";
     sum+=(krr[p+1])*(i+1);
  }

  int k=arr.size()+1;

//  cout<<sum<<endl;
//  cout<<m<<endl;

  while(n>0)
  {
      sum+=(m)*k;
      k++;
      n--;
  }

  cout<<sum<<endl;


}



