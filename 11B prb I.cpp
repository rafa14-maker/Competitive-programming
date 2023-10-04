#include<stdio.h>
int main()
{
long long a,b,c,counter,i,n,j,k;
scanf("%lld",&n);
while(n--){
scanf("%lld %lld",&a,&b);

counter=0;

for(i=a;i<=b;i++)
{
    j=i;
    while(j>0)
    {
       if(j%10==0)
       {
           counter++;

           break;

       }
       j/=10;
    }

}

c=b-a;

k=c%10;

k=c+(10-k);

printf("%lld/%lld\n",counter,k);
}
}
