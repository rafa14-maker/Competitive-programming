#include<stdio.h>
int main(){
   int n,k;
   scanf("%d %d",&n,&k);
   int b=0;
   for(int i=0;i<n;i++)
   {
       int a;
       scanf("%d",&a);
       if(a==k)b=1;
   }
   if(b==1)printf("YES\n");
   else printf("NO\n");
}

