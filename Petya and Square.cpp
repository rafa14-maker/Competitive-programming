#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k=a/2;
    if((b==k||b==k+1)&&(c==k||c==k+1))cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
