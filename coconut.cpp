#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,k,l;
    cin>>a>>b>>c;
    long long int counter=0;

    counter+=(a/c)+(b/c);
    a=a%c;
    b=b%c;

    counter+=k=(a+b)/c;

   l=k*c-max(a,b);
   if(l<0)l=0;

   cout<<counter<<" "<<l<<endl;

}
