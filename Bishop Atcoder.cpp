#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long  p =(n*m);
    if(n==1||m==1)cout<<1<<endl;
   else if(p%2==0)cout<<p/2<<endl;
    else cout<<(p/2)+1<<endl;
}
