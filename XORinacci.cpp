#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long d=a^b;
    if(c%3==0)cout<<a<<endl;
    else if(c%3==1)cout<<b<<endl;
    else if(c%3==2)cout<<d<<endl;
    }

}
