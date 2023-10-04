#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    bool cr=false;
    for(int i=a;i<=b;i++)
    {
        if(i%n==0)cr=true;
    }
    if(cr)cout<<"OK"<<endl;
    else cout<<"NG"<<endl;
}
