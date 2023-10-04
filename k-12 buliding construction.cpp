#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t,a,b;
    cin>>t;
    while(t--)
    {
        long long n,tmp;
        cin>>n;
      //  if(n!=0&&a!=0&&b!=0){
        long long  arr[n+5],frr[n+5];

        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            arr[i]=tmp;
        }
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            frr[i]=tmp;
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long k=0;
            for(int j=0;j<n;j++)
            {
                    k+=abs(arr[i]-arr[j])*frr[j];
            }
            if(sum==0)sum=k;
            else sum=min(k,sum);
        }
        cout<<sum<<endl;
    }


}
