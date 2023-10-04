#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k=max(a,b);
    if(k>c)cout<<1<<endl;
    else if(c%k==0)cout<<c/k<<endl;
    else cout<<(c/k)+1<<endl;
}
