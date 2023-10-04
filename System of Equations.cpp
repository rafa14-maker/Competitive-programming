#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int counter=0;
    for(int i=0;i*i<=n;i++)
    {
        int k=n-(i*i);
        if(k*k+i==m)counter++;
    }
    cout<<counter<<endl;
}
