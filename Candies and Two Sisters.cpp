#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       long long n;
       cin>>n;
       if(n%2==0)n--;
       cout<<n/2<<endl;
    }
}
