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

        int idx1=0,idx2=0,flag=0;

       while(n--)
       {
           int a,b;
           cin>>a>>b;
           if(a<idx1||b<idx2)flag++;
           if(b>idx2&&a<=idx1)flag++;
           if(a>idx1&&b>idx2&&abs(a-idx1)<abs(b-idx2))flag++;
           idx1=a;
           idx2=b;
       }


        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
