#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
       cin>>n;
       if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
       else
       {
           long long k = n-1;
           cout<<k<<" "<<1<<"\n";
       }
    }
}
