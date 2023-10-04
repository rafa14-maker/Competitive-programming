#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n<6)cout<<0<<endl;
    else if(n>=6&&n<=12)cout<<k/2<<endl;
    else cout<<k<<endl;
}
