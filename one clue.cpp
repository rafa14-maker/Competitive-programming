#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    int a=n-x+1;
    for(int i=1;i<=x*2-1;i++)
    {
        cout<<a<<" ";
        a++;
    }
}
