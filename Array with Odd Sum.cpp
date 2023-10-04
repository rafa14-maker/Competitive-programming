#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int ft=0,fw=0,sum=0;
        while(n--)
        {
            int a;
            cin>>a;
            sum+=a;
            if(a%2==1)ft=1;
            else fw=1;
        }
        if(sum%2==1)cout<<"YES"<<endl;
        else if(fw>0&&ft>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
