#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    double k;
    cin>>n>>k;
    double arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    double l=0,r=k,f1=1,f2=1;
    double mn=0;
    int idx=0,idx1=n-1;
    while(l<r)
    {
       double pk=(arr[idx]-l)/f1;
       double kp=(r-arr[idx1])/f2;
       if(idx>idx1)
       {
           double kp=r-l;
           mn+=(kp)/(f1+f2);
           break;
       }
        if(pk<kp)
        {
            l+=pk*f1;
            r-=pk*f2;
            mn+=pk;
            f1++;
            idx++;
        }
        else if(pk==kp)
        {
               l+=pk*f1;
            r-=pk*f2;
            mn+=pk;
            f1++;
            idx++;
            f2++;
            idx1--;
        }
        else
        {
            r-=kp*f2;
            l+=kp*f1;
            mn+=kp;
            f2++;
            idx1--;
        }
       // cout<<mn<<endl;
    }
  printf("%.10lf\n",mn);
}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}

