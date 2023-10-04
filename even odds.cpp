#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a,b,c,k;
    cin>>a>>b;

    if(a%2==0)
    {
        k=a/2;
    }
    else
    {
        k=(a/2)+1;
    }

    if(b>k)
    {
        b-=k;
        c=2;
        while(b--)
        {
            c+=2;
        }
    }
    else if(b<=k)
    {
      c=1;
      while(b--)
      {
          c+=2;
      }
    }

    cout<<c-2<<endl;
}
