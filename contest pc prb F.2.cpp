#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=1,m,i,k,counter=1;

    cin>>n>>m;

    for(i=0;i<n-1;i++)
    {
       cin>>k;
       if(k!=m)
       {
           counter++;
       }
       m=k;
    }

    cout<<counter<<endl;
}
