#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long d=max(a,b);
    long long e=min(a,b);
    if(e*c<d)cout<<"REBEL"<<endl;
    else cout<<"OBEY"<<endl;}
}
