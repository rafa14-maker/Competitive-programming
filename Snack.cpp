#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long lcm = (a*b)/__gcd(a,b);
    cout<<lcm<<endl;
}
