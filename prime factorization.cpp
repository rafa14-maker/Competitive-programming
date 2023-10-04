#include<bits/stdc++.h>
using namespace std;

map<int,int>factors(int n)
{
    map<int,int>factorize;
    while(n%2==0)
    {
        factorize[2]++;
        n=n/2;
    }



    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            factorize[i]++;
            n=n/i;
        }
    }

   if(n>2)
    {
     factorize[n]++;
    }

    return factorize;

}

int main()
{
    int i,n;
    cin>>n;

    map<int,int>acm=factors(n);
    map<int,int>::iterator it;

    for(it=acm.begin();it!=acm.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}
