#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,e,f,k;
    cin>>a>>b>>c;


  if(c<=b)
  {
      b=c-1;
  }
  if(a>=b)
  {
      a=b-1;
  }
  if(a+1<b)
  {
      b=a+1;
  }
  if(b+1<c)
  {
     c=b+1;
  }
  cout<<a+b+c<<endl;


}
