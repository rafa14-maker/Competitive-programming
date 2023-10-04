#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    map<string,string>mp;
    while(getline(cin,a)&&a!="")
    {
        istringstream sin(a);
        sin >> c >> b;
       mp[b]=c;
       mp[c]=b;
    }
   // cout<<"YES"<<endl;
     while(cin>>a&&a!="")
    {
       if(mp[a]!="") cout<<mp[a]<<endl;
       else cout<<"eh"<<endl;
    }
}
