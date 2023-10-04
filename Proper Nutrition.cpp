#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
   long long i=1;
   int p=0;

   while(p<=n)
   {
       long long k = n-p;
       if(k%b==0)
       {
           cout<<"YES"<<endl;
           cout<<p/a<<" "<<k/b<<endl;
           return 0;
       }
       p=a*i;
       i++;
   }
    cout<<"NO"<<endl;
}
