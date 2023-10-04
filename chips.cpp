#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int i=1;
    cin>>n>>m;
    while(m>=i)
    {
        m-=i;
        i++;
        if(i>n){i=1;}
    }
    if(m<0){cout<<0<<endl;}
   else {cout<<m<<endl;}
}
