/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

long long check(long long a)
{
  long long p=a,sum=0;
  while(p>0)
  {
      sum+=(p%10);
      p/=10;
  }
  return sum;
}

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);


  long long n,a=-1;
  cin>>n;

  for(int i=1;i<=81;i++)
  {
      long long ans=sqrt((i*i)/4+n)-i/2;
      long long b=check(ans);
      if(ans*ans+b*ans-n==0)
      {
          a=ans;
          break;
      }
  }

  cout<<a<<endl;

}



