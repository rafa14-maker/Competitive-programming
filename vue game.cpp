#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int counter=0;
    if(n*m>=2)counter++;
    cout<<counter+((n*m)/5)<<endl;
}
