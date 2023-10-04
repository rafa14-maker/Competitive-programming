#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    string k;
    for(int i=0;i<t.size()-1;i++)k+=t[i];
    if(k==s)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
