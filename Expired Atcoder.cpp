#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,a,b;
    cin>>x>>a>>b;
    int k=-a+b;
    if(k<=0)cout<<"delicious"<<endl;
    else if(k<=x)cout<<"safe"<<endl;
    else cout<<"dangerous"<<endl;
}
