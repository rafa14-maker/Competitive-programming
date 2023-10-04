#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v0,v1,l,i,a,counter=1,c,k;
    cin>>c>>v0>>v1>>a>>l;
    k=v0,i=v0;

    while(c>i)
    {
         k=min(v1,k+a);
         i+=k-l;
         counter++;
    }

    cout<<counter<<endl;
}
