#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        long long n;
        cin>>n;
        if(n<0)break;
        n = (n*(n+1))/2;
        cout<<n+1<<endl;
    }
}
