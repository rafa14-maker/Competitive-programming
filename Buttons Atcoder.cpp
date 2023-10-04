#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<max(n+m,max(n+(n-1),m+(m-1)))<<endl;
}
