#include<bits/stdc++.h>
using namespace std;

long long int  ko(long long int a,long long int b)
{
    if(b==0)
    {
        return 1;
    }
    else if(b==1)
    {
        return a;
    }
    else
    {
        int r=ko(a,b/2);
        if(b%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*a;
            }
    }
}

int main()
{
    long long int low,up,digit,k,p,i,l,m,num1,num2;

    cin>>low>>up;

    for(i=low;i<up;i++)
    {
        k=i*i;
        p=k;
        digit=0;
        while(p>0)
        {
            digit++;
            p/=10;
        }
            l=digit/2;
        m=digit-l;

        num1=k/ko(10,m);
        num2=k-(num1*ko(10,m));




        if(num1+num2==i)
        {
            cout<<i<<endl;
        }
    }
}
