#include<bits/stdc++.h>
using namespace std;

int i,j,k,a,b,n;

map<int,int>factors(int n)
{
    map<int,int>fac;

    while(n%2==0)
    {
        n/=2;
        fac[2]++;
    }

    for(i=3;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            n/=i;
            fac[i]++;
        }
    }

    if(n>2)
    {
        fac[n]++;
    }

    return fac;

}

int main()
{
    cin>>n;

    map<int,int>acm=factors(n);

    map<int,int>::iterator it;

    int p;
    int arr[p];


}



