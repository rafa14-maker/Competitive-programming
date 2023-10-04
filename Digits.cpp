#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int counter=0;
    while(n>0)
    {
        counter++;
        n/=k;
    }
    cout<<counter<<endl;
}
