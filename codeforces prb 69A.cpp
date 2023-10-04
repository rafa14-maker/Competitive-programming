#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,c,sum=0,kum=0,gum=0,n;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        sum+=a;
        kum+=b;
        gum+=c;
    }

    if(sum==0&&kum==0&&gum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
