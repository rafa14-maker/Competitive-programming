#include<bits/stdc++.h>
using namespace std;

long long arr[105];
long long  n,k,q;


void h()
{
    for(int i=0;i<101;i++)
    {
        arr[i]=0;
    }
}

int main()
{
    cin>>q;
    while(q--)
    {
        h();
        cin>>n>>k;

        long long l=0,min1=1e9,max1=0,b;

        for(int i=0;i<n;i++)
        {
            cin>>b;
            min1=min(min1,b);
            max1=max(max1,b);
        }

        if(max1-min1-k>k)cout<<-1<<endl;
        else
        {
            cout<<min1+k<<endl;
        }

       /* l=(max1+min1)/2;
        long long r=1e9;

       while(l<r)
        {
              long long mid=(l+r)/2;
              if(l==mid||r==mid)break;

              if((abs(mid-max1)>k||abs(mid-min1)>k))r=mid-1;
              else l=mid;
            //  cout<<l<<" "<<r<<endl;
        }
      //  cout<<l<<" "<<r<<endl;
        if(abs(l-max1)>k||abs(l-min1)>k)cout<<-1<<endl;
        else cout<<l<<endl;*/
    }
}
