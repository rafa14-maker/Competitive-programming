#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0,k=0,i=0;
    while(k<=n)
    {
        k=pow(2,i);
        i++;
    }
    cout<<k-1<<endl;
}
