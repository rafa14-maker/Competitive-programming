#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)cout<<">"<<endl;
        else if(a<b)cout<<"<"<<endl;
        else if(a==b)cout<<"="<<endl;
    }
}
