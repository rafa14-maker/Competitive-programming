#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m;
    int sum=0;
    while(n--)
    {
        cin>>k;
        sum+=k;
    }
    cout<<sum*2<<endl;
}
