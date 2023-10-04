#include<bits/stdc++.h>
using namespace std;

void solve(int qk)
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    int d,e,f;
     scanf("%d/%d/%d",&d,&e,&f);

     int k=a+b*30+c*365;
     int p=d+e*30+f*365;

     printf("Case #%d: ",qk);

     if(k<p)
     {
          printf("Invalid birth date\n");
     }
     else
     {
         int kp=k-p;
         if(kp/365>130)
         {
             printf("Check birth date\n");
         }
         else
         {
             printf("%d\n",kp/365);
         }
     }

}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
