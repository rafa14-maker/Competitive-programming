#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==1)cout<<3<<" ";
    else cout<<2<<" ";
    int k=n/2;
    k--;
    while(k--)cout<<2<<" ";
    cout<<endl;
}
