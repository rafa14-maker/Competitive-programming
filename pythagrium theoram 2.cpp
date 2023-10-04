#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,j;
    scanf("%d",&n);

    int counter=0;

   for(i=1;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
            double k=sqrt(i*i+j*j);
            int p=sqrt(i*i+j*j);
            if(k==p&&p<=n)
            {
                counter++;
            }
       }
   }

    printf("%d\n",counter);
}
