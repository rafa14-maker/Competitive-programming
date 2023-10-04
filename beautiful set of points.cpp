#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a=min(n,m)+1;
    cout<<a<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<i<<" "<<m-i<<endl;
    }
}
