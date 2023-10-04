#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(s[k-1]>='A'&&s[k-1]<='Z')s[k-1]+=32;
    cout<<s<<endl;
}
