#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int k=n/500;
    int p=n%500;
    int c=p/5;
    cout<<k*1000+c*5<<endl;
}
