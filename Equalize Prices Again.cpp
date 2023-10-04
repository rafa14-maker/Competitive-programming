#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long long sum=0;
        long long arr[n+5];
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
            sum+=arr[i];
        }
       long long k=sum/n;
       if(k*n>=sum)cout<<k<<endl;
       else cout<<k+1<<endl;
    }
}
