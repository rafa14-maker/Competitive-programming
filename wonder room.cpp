#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long k=n*6;
    if(a*b>=k)
    {
    cout<<a*b<<" "<<endl<<a<<" "<<b<<endl;
    return 0;
    }
   long long a1=a,b1,c1;
   if(k%a1==0)b1=k/a1;
   else b1=(k/a1)+1;
  c1=b1*a1;

  long long a2,b2=b,c2;
   if(k%b2==0)a2=k/b2;
   else a2=(k/b2)+1;
 c2=a2*b2;

   long long a3=a,b3=b,c3=a3*b3;
   while(c3<k)
   {
       a3++;
       b3++;
       c3=a3*b3;
   }
  // cout<<c1<<" "<<c2<<" "<<c3<<endl;
  long long k1=min(c1,c2);
   k1=min(k1,c3);
   if(k1==c1)
   {
       cout<<k1<<endl<<a1<<" "<<b1<<endl;
   }
   else  if(k1==c2)
   {
       cout<<k1<<endl<<a2<<" "<<b2<<endl;
   }
   else  if(k1==c3)
   {
       cout<<k1<<endl<<a3<<" "<<b3<<endl;
   }
}
