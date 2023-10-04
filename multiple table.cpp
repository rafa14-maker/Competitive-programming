//Dont copy my Code ^_______^

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,k=0,a,b;
    cin>>a>>b;

    for(i=1;i<=a;i++)
    {
        if(b%i==0&&a>=(b/i))
        {
            k++;
        }
    }

    cout<<k<<endl;
}
