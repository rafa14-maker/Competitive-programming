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
        if(a%2==0&&b%2==1||a%2==1&&b%2==0)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        int k=(a+b)/2;
        if(a>=b)cout<<k<<" "<<a-k<<endl;
        else cout<<"impossible"<<endl;
    }
}
