#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n>23)
    {
        cout<<m<<endl;
    }
    else
    {
        int k=pow(2,n);
        cout<<m%k<<endl;
    }
}
