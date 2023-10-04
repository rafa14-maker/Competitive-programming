#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,counter=0;
    while(n--)
    {
        cin>>a>>b;
        if(abs(a-b)>=2)counter++;
    }
    cout<<counter<<endl;
}
