#include<bits/stdc++.h>
using namespace std;

long long a,b;
int p=-1;

void f(long long n,int counter)
{
    if(n==b)
    {
        if(p==-1)p=counter;
        else p=min(p,counter);
        return ;
    }
    if(n>b)return ;
    f(n*2,counter+1);
    f(n*3,counter+1);
}

int main()
{

    cin>>a>>b;
    f(a,0);
    cout<<p<<endl;
}
