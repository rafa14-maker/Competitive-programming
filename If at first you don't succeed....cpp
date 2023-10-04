#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    if(n>0&&a>=c&&b>=c&&n-(a+b-c)>=1)cout<<n-(a+b-c)<<endl;
    else cout<<-1<<endl;
}
