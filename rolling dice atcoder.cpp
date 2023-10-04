#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b<a)
    {
        cout<<"No"<<endl;
        return 0;
    }
    while(a--)b-=6;
    if(b<=0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
