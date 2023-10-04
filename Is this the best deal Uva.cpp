#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   int sum=1e9,cnt=0;
   int n,m,k;


   n=a;
   m=b;
   k=c;
   if(n+m+k>=500)cnt-=100;
   cnt+=n+m+k;
   sum=min(sum,cnt);

   n=a;m=b;k=c;
   cnt=n+m;
   if(n+m>=500)cnt-=100;
   if(k>=500)cnt-=100;
   cnt+=k;
    sum=min(sum,cnt);

    n=a;m=b;k=c;
   cnt=n+k;
   if(n+k>=500)cnt-=100;
   if(m>=500)cnt-=100;
   cnt+=m;
    sum=min(sum,cnt);

    n=a;m=b;k=c;
   cnt=m+k;
   if(m+k>=500)cnt-=100;
   if(n>=500)cnt-=100;
   cnt+=n;
    sum=min(sum,cnt);

   n=a;m=b;k=c;
   cnt=m+k+n;
   if(n>=500)cnt-=100;
   if(m>=500)cnt-=100;
   if(k>=500)cnt-=100;
  // cnt+=n;
    sum=min(sum,cnt);

    cout<<sum<<endl;

}
