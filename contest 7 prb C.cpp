#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,b=0,counter=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
      cin>>a;

      if(a>=1)
      {
          b+=a;
      }
      else if(a==-1)
      {
          if(b==0)
          {
              counter++;
          }
          else
          {
              b=b+a;
          }
      }
    }

    cout<<counter<<endl;

    return 0;
}
