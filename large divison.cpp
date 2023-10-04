#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    long int i,j,d,len,k;
    long long b;
    string arr;

    for(i=1;i<=t;i++)
    {
        cin>>arr;
        cin>>b;
        d=0;
        if(arr[0]=='-')j=1;
        else j=0;

        for(;j<arr.size();j++)
        {
            d=d*10+(arr[j]-'0');
            d=d%b;
        }
        if(d==0)
        {
            printf("Case %d: divisible\n",i);
        }
        else
        {
            printf("Case %d: not divisible\n",i);
        }
    }
}
