#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,b,c;

    while(1==1)
    {
        cin>>a>>b;
        c=b;
        int counter=0;
        if(a==0||b==0)
        {
            return 0;
        }
        while(c<=b){
        for(i=1;i<=a;i++)
        {
            int k=c/i;
            if(k*i==c)
            {
                c/=i;
                i=1;
            }
        }}
        if(c==1)
        {
            cout<<"yes";
        }
    }
}
