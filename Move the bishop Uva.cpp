#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long  m,n;
        cin>>m>>n;
        while(m--)
        {
            long long a,b,c,d;
            cin>>a>>b>>c>>d;
            if((a+b)%2!=(c+d)%2)cout<<"no move"<<endl;
            else if(a==c&&b==d)cout<<0<<endl;
             else if(abs(a-c)==abs(b-d))cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}
