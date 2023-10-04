#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    if(s[0]=='2'||s[0]=='4'||s[0]=='5'||s[0]=='7'||s[0]=='9')cout<<"hon"<<endl;
    else if(s[0]=='3')cout<<"bon"<<endl;
    else  cout<<"pon"<<endl;
}
