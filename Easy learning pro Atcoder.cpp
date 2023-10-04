#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    int p=0;
    long long sum=0;
    p=min(k,a);
    k-=p;
    sum+=p;
    p=min(k,b);
    k-=p;
    p=min(k,c);
    k-=c;
    sum+=(p*(-1));
    cout<<sum<<endl;
}
