#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,b=0,i,k=1;

    cin>>n;

    if(n<0||n>20)
    {
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>25)
        {
            return 0;
        }
        else if(a==b)
        {
            cout<<k<<" "<<a-k<<endl;
            k++;
            b=a;
        }
        else if(a!=b)
        {
            cout<<0<<" "<<a<<endl;
            k=1;
            b=a;
        }


    }
}
