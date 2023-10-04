#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int counter=0,k=d*2+1;
    while(n>0)
    {
        counter++;
        n-=k;
    }
    cout<<counter<<endl;
}
