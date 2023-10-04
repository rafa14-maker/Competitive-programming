#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,m,sum=0;
        cin>>n>>m;
        long long arr[15];
        for(int i=1;i<=10;i++)
        {
            arr[i]=(m*i)%10;
            sum+=arr[i];
        }
        long long counter=0,t=n/m,p=t%10;
       // cout<<t<<" "<<p<<endl;
       // cout<<sum<<endl;
        for(int i=1;i<=p;i++)
        {
            counter+=arr[i];
        }
        t-=p;
        t/=10;
        counter+=(sum*t);
        cout<<counter<<endl;

    }
}
