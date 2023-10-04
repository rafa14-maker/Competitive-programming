#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,b,y,flag=-1;
    cin>>n>>a>>x>>b>>y;

    while(a!=x&&b!=y)
    {
        if(a==b)
        {
            //cout<<"YES"<<endl;
            flag++;
            break;
        }
        a++;
        b--;
        if(a==n+1)a=1;
        if(b==0)b=n;
        if(a==b)
        {
            //cout<<"YES"<<endl;
            flag++;
            break;
        }
        //cout<<a<<" "<<b<<endl;
    }
    if(flag>-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
