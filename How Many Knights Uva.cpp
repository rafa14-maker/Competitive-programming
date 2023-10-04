#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        int arr[n+5][m+5]={0};
      if(n>=3&&m>=3)
      {
          int num=n*m;
          if(num%2==1)num++;
            printf("%d knights may be placed on a %d row %d column board.\n",num/2,n,m);
      }
      else if(n==1||m==1) printf("%d knights may be placed on a %d row %d column board.\n",max(n,m),n,m);
      else if(n==2||m==2)
      {
          int k;
          if(n==2)k=m;
          if(m==2)k=n;
          int num=0;
          if(k%2==1)num=k+1;
          else if(k%2==0&&(k/2)%2==0)num=k;
          else if(k%2==0)num=k+2;


           printf("%d knights may be placed on a %d row %d column board.\n",num,n,m);
      }
    }
}
