#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int k=a+b;
    k=max(k,a-b);
    k=max(k,a*b);
    cout<<k<<endl;
}
