#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
   int flag=0;
   long long i=a;
   while(i<=b)
   {
       flag++;
       i*=2;
   }
   cout<<flag<<endl;
}
