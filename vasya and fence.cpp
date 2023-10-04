#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,counter=0,a;
    cin>>n>>m;
    while(n--)
    {
       cin>>a;
       if(a>m)counter+=2;
       else counter+=1;
    }
    cout<<counter<<endl;
}
