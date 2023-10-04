#include<bits/stdc++.h>
using namespace std;
long long  arr(long long  a, long long b)
{
    if(b == 0)
        return a;
    else
        return arr(b,a%b);
}
int main()
{
    long long  a,b,c,n,k,i,j;

    scanf("%lld",&n);

   for(i=0;i<n;i++)
   {
       scanf("%lld %lld",&a,&c);

       k=arr(a,c);int counter=0;

       for(j=1;j*j<=k;j++)
       {
           if(k%j==0){
           counter++;}
       }
       j--;
       if(j*j==k)
       {
           printf("%lld",counter*2-1);
       }
       else
       {
           printf("%lld",counter*2);
       }
   }
}
