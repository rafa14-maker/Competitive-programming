#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,m;
        cin>>n>>x>>m;
        int a=x,b=x;

        while(m--)
        {
            int c,d;
            cin>>c>>d;
            if(c>b||d<a)continue;
            a=min(c,a);
            b=max(b,d);
        }
        cout<<b-a+1<<endl;
    }
}
