#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int sum=a*60+b;
        cout<<1440-sum<<endl;
    }
}
