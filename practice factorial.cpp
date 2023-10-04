#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=n;i++)sum*=i;

    int counter=0;

    for(int i=1;i*i<=sum;i++)
    {
       if(sum%i==0)
       {
           counter++;
           if(sum/i!=i)counter++;
       }
    }

    cout<<counter<<endl;
}
