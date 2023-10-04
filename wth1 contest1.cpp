#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    cin>>n;

    int arr[n],k=0,frr[n],yi=0,a,b,p,s=0,krr[n],uo=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
      p=arr[i];
      b=0;
      while(p>0)
      {
          a=p%10;
          b+=a;
          p/=10;
      }
      frr[yi]=b;
      yi++;
    }

    sort(frr,frr+yi);

    for(i=0;i<yi;i++)
    {
         p=arr[i];
      b=0;
      while(p>0)
      {
          a=p%10;
          b+=a;
          p/=10;
      }
      if(b==frr[yi-1])
      {
          krr[uo]=arr[i];
          uo++;
      }


    }
    sort(krr,krr+uo);

    cout<<krr[0]<<endl;

return 0;
}
