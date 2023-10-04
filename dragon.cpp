#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m=0;

    cin>>k;

    for(i=0;i<k-1;i++)
    {
        cin>>j>>l;
        m+=j-l;
    }
    cin>>j>>l;
    cout<<m+j<<endl;
}
