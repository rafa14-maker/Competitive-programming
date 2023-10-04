#include<bits/stdc++.h>
using namespace std;

solve(int k,int p)
{
    int idx1=0,idx2=0;
    int a=0,b=k,c=0,d=p;

    while(1)
    {
        if(idx1>0)idx1--;
        else
        {
            a++;
            if(a>59)
            {
                a=0;
                b++;
                if(b==24)
                {
                    b=0;
                    idx1=k;
                }
            }
        }
        if(idx2>0)idx2--;
        else
        {
            c++;
            if(c>59)
            {
                d++;
                if(d==24)
                {
                    d=0;
                    idx2=p;
                }
            }
        }
        if(a==c&&(b==d||(b%12)==d||(d%12)==b))break;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

int main()
{
    int k,p;
    while(scanf("%d %d",&k,&p)!=EOF)
    {
        solve(k,p);
    }
}
