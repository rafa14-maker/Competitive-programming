#include<bits/stdc++.h>
using namespace std;



int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       // long long n;
      int n;
      cin>>n;
      long long sum1=0,sum2=0;

      if(n==2)
      {
          cout<<2<<endl;
          continue;
      }
      n=n/2;
       cout<<pow(2,n+1)-2<<endl;
    }
}
