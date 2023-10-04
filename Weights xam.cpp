#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
     frr[0]=0;
     for(int i=1;i<=n;i++)frr[i]=frr[i-1]+arr[i-1];
     double mn=frr[n]/n;
     for(int i=0;i<=n;i++)
     {
         double sum=frr[n]-frr[i];
         double pk=0,fk=0;
         if((n-i)!=0)pk=sum/(n-i);
         if(i!=0)fk=frr[i]/i;
         double kp=max((pk-fk),fk-pk);
         mn=max(mn,kp);
     }
     printf("%.9lf\n",mn);
}
