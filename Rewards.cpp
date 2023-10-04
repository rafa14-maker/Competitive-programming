#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0,flag=0;
    sum+=(a+b+c);
    cin>>a>>b>>c;
    flag+=(a+b+c);
    int n;
    cin>>n;
    int k,p;
    if(sum%5==0)k=sum/5;
    else k=(sum/5)+1;
    if(flag%10==0)p=flag/10;
    else p=(flag/10)+1;
    if(k+p<=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
