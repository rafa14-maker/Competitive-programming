#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1&&b==-1)break;
        int n = abs(a-b);
        if(a>b)swap(a,b);
        int m = a+(100-b);
        cout<<min(n,m)<<endl;
    }
}
