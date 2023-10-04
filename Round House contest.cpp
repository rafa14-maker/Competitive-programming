#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    while(b!=0)
    {
        if(b<0)
        {
            b++;
            a--;
        }
        else
        {
            b--;
            a++;
        }
        if(a>n)a=1;
        else if(a==0)a=n;
    }
    cout<<a<<endl;
}
