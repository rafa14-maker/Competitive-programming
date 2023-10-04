#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    sum+=a;
   sum+=a/b;
   a/=b;
   if(a>0)
   {
       sum++;
       a-=b;

   }

    cout<<sum<<endl;
}
