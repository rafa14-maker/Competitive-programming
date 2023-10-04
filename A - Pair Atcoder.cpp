#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b;
    if(n%2==0)a=n/2,b=n/2;
    else a=(n/2)+1,b=n/2;
    cout<<a*b<<endl;
}
