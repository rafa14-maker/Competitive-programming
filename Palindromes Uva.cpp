#include<bits/stdc++.h>
using namespace std;
map<char,char>mp;

string line = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string r = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool mirrored(string a) {
    for(int i = 0; i < a.length() / 2 + a.length() % 2; i++) {
        if(a[a.length() - 1 - i] != mp[a[i]])
            return false;
    }
    return true;
}


int main()
{
   // build();
    string s;
     for(int i = 0; i < line.length(); i++)
        mp[line[i]] = r[i];
    while(cin>>s)
    {
        bool tr=true;
        for(int a=0,b=s.size()-1;a<=b;a++,b--)if(s[a]!=s[b])tr=false;
        string frr=s;
        bool pr=mirrored(frr);
       // bool pr=true;
       /* for(int a=0,b=s.size()-1;a<=b;a++,b--)
        {
           // if(mp[s[a]]!=' ')pr=false;
            if(mp[s[a]]!=s[b])pr=false;
        }*/
        if(!tr&&!pr)
        {
           cout<<frr<<" -- "<<"is not a palindrome."<<endl;
        }
        else if(!tr&&pr)
        {
           cout<<frr<<" -- "<<"is a mirrored string."<<endl;
        }
        else if(tr&&!pr)
        {
            cout<<frr<<" -- "<<"is a regular palindrome."<<endl;
        }
        else cout<<frr<<" -- "<<"is a mirrored palindrome."<<endl;
        cout<<endl;
    }
}
