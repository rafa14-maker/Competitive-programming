#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,k;
    cin>>a>>b>>k;
    long long sum=min(a,k);
    k-=sum;
    a-=sum;
    if(k<=0)
    {
        cout<<a<<" "<<b<<endl;
        return 0;
    }

    sum=min(b,k);
    b-=sum;
   // cout<<sum<<endl;
    cout<<a<<" "<<b<<endl;
}
