#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,k;
        cin>>n>>k;
         long long x=n-1;
         long long a=k/x;
         long long b=k%x;
         if(b==0)cout<<a*n-1<<endl;
         else cout<<(a*n)+b<<endl;
    }
}
