#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
    int counter=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])counter++;
    }
    if(counter<2)return true;
    else return false;
}


int main()
{
    int q;
    cin>>q;

    string one="one";
    string two="two";
    string three="three";
    vector<int>v;
    while(q--)
    {
        string s;
        cin>>s;
        v.clear();
        for(int i=0;i<s.size();i++)
        {
            if(i+2<s.size())
            {
                string str;
                str=s[i];
                str+=s[i+1];
                str+=s[i+2];
                if(cmp(str,one))
                {
                    v.push_back(1);
                    i+=2;
                }
                else if(cmp(str,two))
                {
                    v.push_back(2);
                    i+=2;
                }
            }
            if(i+4<s.size())
            {
                  string str;
                   str=s[i];
                str+=s[i+1];
                str+=s[i+2];
                 str+=s[i+3];
                  str+=s[i+4];
                if(cmp(str,three))
                {
                    v.push_back(3);
                    i+=4;
                }
            }
        }
        for(int i=0;i<v.size();i++)cout<<v[i];
        cout<<endl;
    }
}
