#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i=2;
    cin>>n>>k;
    int counter=0,sum=5;
    while(sum+k<=240)
    {
        counter++;
        sum+=i*5;
        i++;
        if(counter==n)break;
    }
    cout<<counter<<endl;
}
