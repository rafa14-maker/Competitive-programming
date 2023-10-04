#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a,b,c;
    if(n%4==0)a='D';
        else if(n%4==1)a='A';
        else if(n%4==2)a='C';
        else if(n%4==3)a='B';

    if((n+1)%4==0)b='D';
        else if((n+1)%4==1)b='A';
        else if((n+1)%4==2)b='C';
        else if((n+1)%4==3)b='B';

        if((n+2)%4==0)c='D';
        else if((n+2)%4==1)c='A';
        else if((n+2)%4==2)c='C';
        else if((n+2)%4==3)c='B';

        char k=min(a,min(b,c));

       // cout<<a<<b<<c<<endl;

        if(k==a)cout<<0<<" "<<a;
          else if(k==b)cout<<1<<" "<<b;
           else  if(k==c)cout<<2<<" "<<c;

}
