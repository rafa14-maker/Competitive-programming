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
  string arr;
  cin>>arr;

  int a=0,b=0,k1,l1,k2,l2,counter=0,found=0;

  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]=='R'&&counter==0)
    {
        counter++;
        k1=i+1;
    }
     if(arr[i]=='R')
    {
       k2=i+2;
    }

  }
  for(int i=n-1;i>=0;i--)
  {
    if(arr[i]=='L')
    {
        l1=i;

    }
    if(arr[i]=='L'&&found==0)
    {
       l2=i+1;
       found++;
    }
    if(arr[i-1]=='R')break;
  }

  if(counter!=0&&found==0)
  {
      cout<<k1<<" "<<k2<<endl;
  }
  else if(counter==0&&found!=0)
  {
      cout<<l2<<" "<<l1<<endl;
  }
  else
  {
      cout<<k1<<" "<<l1<<endl;
  }

}



