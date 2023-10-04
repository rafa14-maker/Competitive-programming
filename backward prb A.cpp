#include<bits/stdc++.h>
using namespace std;

int expo(int base , int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return base;
    }
    else
    {
        int r=expo(base,n/2);

        if(n%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*base;
        }
    }
}

int main()
{
    int n;

    while(1==1)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            int b=0,j=i;
            if(n%j==0){
            while(n>=j)
            {
                int c=expo(j,b);

                if(n==c)
                {
                    cout<<b<<endl;
                   return 0;
                }
                b++;
            }}
        }
        cout<<1<<endl;
    }
}
