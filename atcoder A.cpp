#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k=a/b;
    if(a%b!=0)k++;
    cout<<k*c<<endl;
}
