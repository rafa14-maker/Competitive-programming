#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a;
    cin>>n>>k;
    int counter=0;
    while(n--)
    {
       cin>>a;
       counter+=(a/k);
    }
    cout<<counter<<endl;
}
