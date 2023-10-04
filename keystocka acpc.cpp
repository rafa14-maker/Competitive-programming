#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a,b,c,d;
    if(n==1)
    {
        cin>>a;
        b=a;
    }
    else cin>>a>>b;
    if(m==1)
    {
        cin>>c;
        d=c;
    }
    else cin>>c>>d;

    int arr[4][2];

    arr[0][0]=0;
    arr[0][1]=0;

    arr[1][0]=0;
    arr[1][1]=1;

    arr[2][0]=1;
    arr[2][1]=0;

    arr[3][0]=1;
    arr[3][1]=1;

    int cnt=0;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
