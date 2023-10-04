#include<bits/stdc++.h>
using namespace std;

int jh(int n,int k)
{
    if(n==0)return 1;
    return (jh(n-1,k)+k)%n;
}

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        printf("Case %d: %d\n",++p,jh(a,b)+1);
    }
}
