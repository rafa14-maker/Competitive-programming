#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,k,b,c;
    string arr,frr,krr;
    cin>>a>>b;
    c=a+b;
    while(a>0)
    {
        if(a%10!=0)
        {
            arr+=((a%10)+'0');
        }
        a/=10;
    }
    a=0;
    for(int i=arr.size()-1;i>=0;i--)
    {
        a*=10;
      a+=(arr[i]-'0');
    }

     while(b>0)
    {
        if(b%10!=0)
        {
            frr+=((b%10)+'0');
        }
        b/=10;
    }
    b=0;
    for(int i=frr.size()-1;i>=0;i--)
    {
        b*=10;
      b+=(frr[i]-'0');
    }
     while(c>0)
    {
        if(c%10!=0)
        {
            krr+=((c%10)+'0');
        }
        c/=10;
    }
    c=0;
    for(int i=krr.size()-1;i>=0;i--)
    {
        c*=10;
      c+=(krr[i]-'0');
    }

    if(a+b==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
