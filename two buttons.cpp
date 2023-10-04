#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,counter=0;
    cin>>n>>k;
    while(n<k)
    {
        if(k%2==1)k++;
        else k/=2;
        counter++;
    }
    cout<<counter+(n-k);
}
