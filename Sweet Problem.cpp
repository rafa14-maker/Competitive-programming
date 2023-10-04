#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int sum=(a+b+c)/2;
       int sum1=a+b+c-max(a,max(b,c));
       cout<<min(sum1,sum)<<endl;
    }
}
